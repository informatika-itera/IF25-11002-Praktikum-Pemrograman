# Hands-on Pertemuan 6 — Perulangan Bagian 2 dan Pola

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 6 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P6 Perulangan Bagian 2 dan Pola.pdf` dan `03 Modul/Modul 06 - Perulangan Bagian 2 dan Pola.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 6.1 Menulis program dengan perulangan bersarang, `break`, dan `continue` untuk menghasilkan pola dan memproses data dua dimensi | CPMK0607 (menerapkan) |
| 6.2 Menurunkan hubungan antara nomor baris dan banyak isi pada sebuah pola, serta menelusuri perulangan bersarang untuk menentukan keluarannya | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-persegi.cpp` | Dasar | 10' | `for` bersarang dengan batas tetap | 6.1 |
| 2 | `handson2-segitiga.cpp` | Menengah | 15' | batas dalam bergantung pada baris | 6.1 |
| 3 | `handson3-piramida.cpp` | Tantangan | 20' | tabel baris-isi, perbaiki tiga batas | 6.2 |
| + | `bonus-prima.cpp` | Pengayaan | sisa | bersarang dengan `break` | 6.1 |

### 1. `handson1-persegi.cpp`

Persegi panjang bintang berukuran t × l. Masukan uji: `3 5`.

### 2. `handson2-segitiga.cpp`

Segitiga angka dan segitiga bintang terbalik untuk n = 5.

### 3. `handson3-piramida.cpp`

Piramida bintang yang batas perulangannya salah. Buat tabel baris, spasi, dan bintang; perbaiki; jelaskan.

### Bonus. `bonus-prima.cpp`

Daftar bilangan prima sampai n dan banyaknya.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 6 dan Tugas 6. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
