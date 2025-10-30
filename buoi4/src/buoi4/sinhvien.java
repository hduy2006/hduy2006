/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package buoi4;

/**
 *
 * @author student
 */
import java.util.Scanner;
public class sinhvien extends congdan {
    private String MSSV;
    private float DTB;
    String type = "SinhVien";
    public sinhvien(){
        super();
        this.MSSV = MSSV;
        this.DTB = DTB;
    }
    public void NhapSinhVien(){
        super.NhapCongDan();
        Scanner sc = new Scanner(System.in);
        MSSV =  sc.next();
        DTB = sc.nextFloat();
    }
    public void HienThiSinhVien(){
        super.HienthiCongDan();
        System.out.println("MSSV:" + MSSV);
        System.out.println("DTB:" + DTB);
    }
    public String getMSSV(){
        return MSSV;}
    public float getDTB(){
        return DTB;
    }
}
