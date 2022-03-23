// Nama : Muhammad Gilang Ramadhan
// NIM  : 13520137
// Tutorial 4 Java
// Time.java
// 17 Maret 2022

public class Time {
    private int hour;
    private int minute;
    private int second;

    public Time() {
        // Set seluruh atribut dengan nilai 0
        this.hour = 0;
        this.minute = 0;
        this.second = 0;
    }

    public Time(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public Time(Time t) {
        // Set atribut dengan atribut milik t
        this.hour = t.hour;
        this.minute = t.minute;
        this.second = t.second;
    }

    public int getHour() {
        return this.hour;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public int getMinute() {
        return this.minute;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public int getSecond() {
        return this.second;
    }

    public void setSecond(int second) {
        this.second = second;
    }

    public int convertToSecond() {
        return (3600 * this.hour + 60 * this.minute + this.second);
    }

    public Time add(Time t) {
        // Return penjumlahan dua objek jam, yaitu *this* dan t.
        // Apabila hasil penjumlahan melebihi 23:59:59, maka Anda harus mengonversinya seperti tampilan jam digital asli.
        // Contoh : 24:00:00 dituliskan 00:00:00, 25:00:00 dituliskan 01:00:00, dst.
        Time temp = new Time();
        int hasilSum_inSecond = (this.convertToSecond() + t.convertToSecond())%86400;
        temp.hour = hasilSum_inSecond / 3600;
        temp.minute = (hasilSum_inSecond - temp.hour * 3600) / 60;
        temp.second = (hasilSum_inSecond - temp.hour * 3600 - temp.minute * 60); 
        return temp;
    }

    public Time minus(Time t) {
        // Return selisih antara dua objek jam, yaitu *this* dan t.
        // Perhitungan selisih hanya dapat dilakukan jika objek ruas kiri lebih akhir dari atau sama dengan objek ruas kanan.
        // Jika objek ruas kiri lebih awal, maka kembalikan nilai objek ruas kiri.
        // Contoh: 00:00:01 - 00:00:02 = 00:00:01
        
        if(this.convertToSecond() >= t.convertToSecond()){
            Time temp = new Time();
            int hasilPengurangan_inSecond = this.convertToSecond() - t.convertToSecond();
            temp.hour = hasilPengurangan_inSecond / 3600;
            temp.minute = (hasilPengurangan_inSecond - temp.hour * 3600) / 60;
            temp.second = (hasilPengurangan_inSecond - temp.hour * 3600 - temp.minute * 60); 
            return temp;
        }
        else{
            return this;
        }
    }

    public boolean lessThan(Time t) {
        // Returns true jika *this* < t menurut definisi waktu
        if(this.convertToSecond() < t.convertToSecond()){
            return true;
        }
        else{
            return false;
        }
    }

    public boolean greaterThan(Time t) {
        // Returns true jika *this* > t menurut definisi waktu
        if(this.convertToSecond() > t.convertToSecond()){
            return true;
        }
        else{
            return false;
        }
    }

    public void printTime() {
        // Menuliskan jam dalam format hh:mm:ss diakhiri dengan newline. Perhatikan bahwa setiap parameter harus dituliskan 2 digit.
        if(hour<10){
            System.out.print(0);
        }
        System.out.print(hour+":");
        if(minute<10){
            System.out.print(0);
        }
        System.out.print(minute+":");
        if(second<10){
            System.out.print(0);
        }
        System.out.println(second);
    }
}
