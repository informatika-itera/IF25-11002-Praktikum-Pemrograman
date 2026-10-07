# Hands-on Pertemuan 5 — Perulangan Bagian 1

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 5 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P5 Perulangan Bagian 1.pdf` dan `03 Modul/Modul 05 - Perulangan Bagian 1.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 5.1 Menulis program yang mengulang proses dengan `for`, `while`, dan `do-while`, memakai pola pencacah, akumulator, dan nilai sentinel | CPMK0607 (menerapkan) |
| 5.2 Menelusuri perulangan dengan trace table, menentukan berapa kali badan perulangan dijalankan, dan menjelaskan penyebab off-by-one atau perulangan tak berhenti | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-deret.cpp` | Dasar | 10' | `for`, akumulator | 5.1 |
| 2 | `handson2-tabungan.cpp` | Menengah | 15' | `while` dengan syarat berhenti | 5.1 |
| 3 | `handson3-rerata.cpp` | Tantangan | 20' | trace table, perbaiki tiga kesalahan sentinel | 5.2 |
| + | `bonus-faktorial.cpp` | Pengayaan | sisa | `do-while` untuk menu, `long long` | 5.1 |

### 1. `handson1-deret.cpp`

Tampilkan 1 sampai n dan jumlahnya. Masukan uji: `6`.

### 2. `handson2-tabungan.cpp`

Simulasikan saldo tabungan per bulan sampai mencapai target.

### 3. `handson3-rerata.cpp`

Program rata-rata dengan sentinel -1 memberi hasil salah. Buat trace table, perbaiki, dan jelaskan.

### Bonus. `bonus-faktorial.cpp`

Menu berulang untuk faktorial dan jumlah deret sampai pengguna memilih 0.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 5 dan Tugas 5. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
