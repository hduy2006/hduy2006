#include<stdio.h>
#include <string.h>
#define max 40
struct SinhVien{
   char MSSV[10];
   char HoTen[50];
   float DiemLT, DiemTH1, DiemTH2;
};
typedef struct{
    struct SinhVien A[max];
    int n;
}DanhSach;
void makenullList(DanhSach *l1){
    l1->n=-1;
}
void insertList(struct SinhVien x,int p, DanhSach *pL) {
    if (pL->n == sizeof(pL->A)/sizeof(pL->A[0])) {
        printf("Danh sach day\n");
        return;
    }
    if (p < 1 || p > pL->n + 2) {
        printf("Vi tri khong hop le\n");
        return;
    }
    for (int i = pL->n; i >= p - 1; i--) {
        pL->A[i + 1] = pL->A[i];
    }
    pL->A[p - 1] = x;
    pL->n++;
}
void hienthi(DanhSach L){
    for (int i=0;i<=L.n;i++){
    printf("%s - %s - %.2f - %.2f - %.2f",L.A[i].MSSV,L.A[i].HoTen,L.A[i].DiemLT,L.A[i].DiemTH1,L.A[i].DiemTH2);
    printf("\n");}
}
DanhSach chepKhongDat(DanhSach L){
    DanhSach l1;
    makenullList(&l1);
    for (int i=0;i<=L.n;i++){
        if (L.A[i].DiemLT+L.A[i].DiemTH1+L.A[i].DiemTH2 < 4.0){
            insertList(L.A[i],l1.n+2,&l1);
        }
    }
    return l1;
}
void chenCuoi(struct SinhVien x,DanhSach *pl){
    insertList(x,pl->n+1,pl);
}
DanhSach chepDat(DanhSach L){
    DanhSach l1;
    makenullList(&l1);
    for (int i=0;i<=L.n;i++){
        if (L.A[i].DiemLT+L.A[i].DiemTH1+L.A[i].DiemTH2 > 4.0){
            insertList(L.A[i],l1.n+2,&l1);
        }
    }
    return l1;
}
void deleteElement(DanhSach *L, int pos){
    if (L->n == -1) {
        printf("danh sach rong");
        return ;
    }
    else if (pos < 1 || pos > L->n)
    {
        printf("danh sach khong hop le");
        return;
    }
    else {
        for (int i = pos-1;i<L->n;i++){
            L->A[i] = L->A[i+1];
        }
        L->n--;
        return;
    }
    
}
int xoaTai(int p,DanhSach *pl){
    deleteElement(pl,p);
    return 0;
}
int main (){
int a;
DanhSach L,l1;
makenullList(&L);
scanf("%d",&a);
getchar();
for (int i=0;i<a;i++){
    scanf("%s",L.A[i].MSSV);
    getchar ();
    fgets(L.A[i].HoTen, sizeof(L.A[i].HoTen), stdin);
    if (L.A[i].HoTen[strlen(L.A[i].HoTen) - 1] == '\n') {
    L.A[i].HoTen[strlen(L.A[i].HoTen) - 1] = '\0';
}
    scanf("%f%f%f",&L.A[i].DiemLT,&L.A[i].DiemTH1,&L.A[i].DiemTH2);
    getchar();
    L.n++;
}
hienthi(L);
l1 = chepKhongDat(L);
hienthi(l1);
return 0;
}