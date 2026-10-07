# Hands-on Pertemuan 2 — Variabel, Tipe Data, Ekspresi, dan Input

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 2 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P2 Variabel, Tipe Data, Ekspresi, dan Input.pdf` dan `03 Modul/Modul 02 - Variabel, Tipe Data, Ekspresi, dan Input.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 2.1 Menulis program yang menyimpan data dalam variabel bertipe tepat (`int`, `double`, `char`, `string`, `bool`), membaca masukan dengan `cin`, dan menampilkan hasil ekspresi | CPMK0607 (menerapkan) |
| 2.2 Menjelaskan pemilihan tipe data dan menelusuri nilai variabel setelah serangkaian penugasan, termasuk akibat pembagian bilangan bulat | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-identitas.cpp` | Dasar | 10' | lima tipe data dasar | 2.1 |
| 2 | `handson2-kantin.cpp` | Menengah | 15' | `cin`, ekspresi perkalian | 2.1 |
| 3 | `handson3-suhu.cpp` | Tantangan | 20' | telusuri dan perbaiki tiga kesalahan logika | 2.2 |
| + | `bonus-ipk.cpp` | Pengayaan | sisa | `fixed`, `setprecision` | 2.1 |

### 1. `handson1-identitas.cpp`

Simpan data identitas di variabel dengan tipe yang tepat dan tampilkan lima baris.

### 2. `handson2-kantin.cpp`

Baca nama barang, harga, dan jumlah, lalu tampilkan struk. Masukan uji: `Nasi 12000 3`.

### 3. `handson3-suhu.cpp`

Program konversi suhu terkompilasi tetapi hasilnya salah. Telusuri dengan masukan 36.6, perbaiki tiga kesalahan logika, dan isi blok `PENJELASAN`.

### Bonus. `bonus-ipk.cpp`

Hitung rata-rata tiga nilai dan tampilkan dua angka di belakang koma.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 2 dan Tugas 2. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
