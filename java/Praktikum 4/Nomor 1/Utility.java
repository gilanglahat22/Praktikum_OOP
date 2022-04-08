// Nama : Muhammad Gilang Ramadhan
// NIM  : 13520137
// Nomor 2
// 7 April 2022
// Utility.java

import java.util.*;

public class Utility {
    /*
     * swap
     Digunakan untuk menukar 2 elemen pada sebuah array (tidak menghasilkan array baru). 
     Terdapat 3 parameter yaitu array generik, index i, dan index j. 
     Apabila index yang ingin ditukar tidak terdapat pada array, maka array tidak berubah.
     */
    public static <T> void swap(T[] arr, int i, int j) {
        // Pemeriksaan letak indeks
        if (arr.length > i && 0 <= i && arr.length > j && 0 <= j) {
            // Pertukaran
            T temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } else {
            // Jika indeks di luar array
        }
    }
    /*
    repeat
    Digunakan untuk membuat array baru yang merupakan pengulangan sebuah array sebanyak N kali. 
    Terdapat 2 parameter yaitu array generik dan integer positif N.
    */
    public static <T> Object[] repeat(T[] arr, int N) {
        ArrayList<T> list = new ArrayList<T>();
        int i;
        int j;
        
        for (i = 0; i < N; i++) {
            for (j = 0; j < arr.length; j++) {
                list.add(arr[j]);
            }
        }

        return list.toArray();
    }

    /*
     * join
      Digunakan untuk menggabungkan seluruh elemen pada array menjadi sebuah string dengan delimeter ",". 
      Terdapat 1 parameter yaitu array generik. Contoh: [1,2,3] menjadi "1,2,3". 
      Perhatikan bahwa tipe data lainnya akan berubah menjadi string yang sesuai, 
      misal true menjadi "true", null menjadi "null", dst.
     */
    public static <T> String join(T[] arr) {
        String joined = new String();
        int i;

        if (arr.length != 0) {
            joined += arr[0];
            for (i = 1; i < arr.length; i++) {
                joined += ",";
                joined += arr[i];
            }
        }
        return joined;
    }

    /*
      sum
      Digunakan untuk menghasilkan jumlah dari seluruh elemen array dengan tipe double. 
      Terdapat 1 parameter yaitu array generik. 
      Method hanya bisa digunakan untuk array dengan tipe elemen berupa Number
     */
    public static <T extends Number> Double sum(T[] arr) {
        int i;
        Double sum = 0.0;
        for (i = 0; i < arr.length; i++) {
            sum += arr[i].doubleValue();
        }
        return sum;
    }
}