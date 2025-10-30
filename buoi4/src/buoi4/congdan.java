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

public class congdan {
    private String CCCD;
    private String HoTen;
    private String DiaChi;
    private String GioiTinh;
    private String QueQuan;
    String type = "CongDan";
     
    public  congdan(){
        this.CCCD = CCCD;
        this.DiaChi = DiaChi;
        this.HoTen =  HoTen;
        this.GioiTinh = GioiTinh;
        this.QueQuan = QueQuan;
        this.type = type;
    }
    public String getCCCD(){
        return CCCD;
    }
    public String getDiaChi(){
        return DiaChi;
    }
    public String getHoTen(){
        return HoTen;
    }
    public String getGioiTinh(){
        return GioiTinh;
    }
    public String getQueQuan(){
        return QueQuan;
    }
    public void NhapCongDan(){
        Scanner sc = new Scanner(System.in);
        CCCD  = sc.next();
        DiaChi = sc.nextLine();
        HoTen = sc.nextLine();
        HoTen = sc.next();
        QueQuan = sc.nextLine();
    }
    public void HienthiCongDan(){
       System.out.println("CCCD: " + CCCD);
       System.out.println("HoTen: " + HoTen);
       System.out.println("GioiTInh: " + GioiTinh);
       System.out.println("DiaChi: " + DiaChi);
       System.out.println("QueQuan: " + QueQuan);
    }
    

    
}
