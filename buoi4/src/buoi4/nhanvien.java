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
public class nhanvien extends congdan {
    private String MSNV;
    private float Luong;
    String type = "NhanVien";
    public nhanvien(){
        super();
        this.MSNV = MSNV;
        this.Luong = Luong;
    }
    public void NhapNhanVien(){
        super.NhapCongDan();
        Scanner sc = new Scanner(System.in);
        MSNV = sc.next();
        Luong = sc.nextFloat();
    }
    public void HienThiNhanVien(){
        super.HienthiCongDan();
        System.out.println("MSNV"+MSNV);
        System.out.println("Luong:" + Luong);
    }
    public String getMSNV(){
        return MSNV; 
    }
    public float getLuong(){
        return Luong;
    }
}
