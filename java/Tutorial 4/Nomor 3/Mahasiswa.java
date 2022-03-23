// Nama  : Muhammad Gilang Ramadhan
// NIM   : 13520137
// Tutorial 4
// Mahasiswa.java
// 17 Maret 2022

import java.lang.Comparable;

class Mahasiswa implements Comparable<Mahasiswa> {
    private float ipk;
    private int kodeJurusan;
    private int angkatan;

    public Mahasiswa(int kodeJurusan, int angkatan, float ipk) {
        this.kodeJurusan = kodeJurusan;
        this.angkatan = angkatan;
        this.ipk = ipk;
    }

    public int getKodeJurusan() {
        return this.kodeJurusan;
    }

    public int getAngkatan() {
        return this.angkatan;
    }

    public float getIpk() {
        return this.ipk;
    }

    public int compareTo(Mahasiswa m) {
        // compareTo mengembalikan:
        // 0 jika this sama dengan m
        // 1 jika this lebih dari m
        // -1 jika this kurang dari m
        if (this.kodeJurusan < m.kodeJurusan) {
            return -1;
        } else if (this.kodeJurusan == m.kodeJurusan && this.angkatan > m.angkatan) {
            return -1;
        } else if (this.kodeJurusan == m.kodeJurusan && this.angkatan == m.angkatan && this.ipk > m.ipk) {
            return -1;
        } else if (this.kodeJurusan == m.kodeJurusan && this.angkatan == m.angkatan && this.ipk == m.ipk) {
            return 0;
        } else {
            return 1;
        }
    }
}