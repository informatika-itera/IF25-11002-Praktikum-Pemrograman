# Hands-on Pertemuan 3 — Operator dan Precedence

Latihan bertingkat untuk fase Hands-on (45 menit) Pertemuan 3 Praktikum Pemrograman (IF25-11002, ITERA). Materinya ada di slide `01 Slide/P3 Operator dan Precedence.pdf` dan `03 Modul/Modul 03 - Operator dan Precedence.pdf`.

## Capaian

| Sub-CPMK | CPMK |
|---|---|
| 3.1 Menulis program yang memakai operator aritmetika termasuk `%`, operator penugasan majemuk, increment, serta operator relasional dan logika untuk menyelesaikan perhitungan | CPMK0607 (menerapkan) |
| 3.2 Menjelaskan urutan evaluasi sebuah ekspresi berdasarkan precedence dan asosiativitas, serta nilai yang dihasilkan pada setiap langkah | CPMK0608 (menjelaskan) |

## Daftar latihan

| No | File | Tingkat | Waktu | Yang dilatih | Sub-CPMK |
|---|---|---|---|---|---|
| 1 | `handson1-waktu.cpp` | Dasar | 10' | `/` dan `%` untuk memecah satuan | 3.1 |
| 2 | `handson2-kembalian.cpp` | Menengah | 15' | `%=` dan pembagian bulat berulang | 3.1 |
| 3 | `handson3-rumus.cpp` | Tantangan | 20' | telusuri precedence, perbaiki tiga rumus | 3.2 |
| + | `bonus-genap.cpp` | Pengayaan | sisa | relasional, `&&`, `boolalpha` | 3.1 |

### 1. `handson1-waktu.cpp`

Ubah jumlah detik menjadi jam, menit, dan detik. Masukan uji: `3725`.

### 2. `handson2-kembalian.cpp`

Pecah uang kembalian menjadi lembar 50000 sampai 1000. Masukan uji: `100000 63000`.

### 3. `handson3-rumus.cpp`

Tiga rumus salah karena urutan operasi dan pembagian bulat. Telusuri, perbaiki, dan jelaskan di blok `PENJELASAN`.

### Bonus. `bonus-genap.cpp`

Tampilkan sifat sebuah bilangan sebagai nilai `bool` tanpa `if`.

## Cara mengerjakan

**GDB Online.** Buka [onlinegdb.com](https://www.onlinegdb.com/online_c++_compiler), pilih C++, salin isi satu file dari `latihan/`, lengkapi bagian `TODO`, lalu klik Run. Bila program membaca masukan, ketik isi file yang sama namanya di `input/`. Bandingkan keluaran kalian dengan file di `expected/`, termasuk spasi.

**Komputer sendiri.** Dari folder ini jalankan `bash cek.sh`. Skrip mengompilasi setiap latihan dengan `-std=c++17 -Wall -Werror`, memberi masukan dari `input/`, lalu mencocokkan keluarannya dengan `expected/`. Keluaran yang diharapkan tidak memuat teks masukan, karena masukan dibaca dari file, bukan diketik.

## Aturan

Kerjakan berurutan. Diskusi dengan teman boleh. AI boleh untuk memahami pesan error, tidak untuk meminta solusi utuh. Hands-on tidak dinilai langsung; yang dinilai Exit Ticket 3 dan Tugas 3. Folder `solusi/` dipegang dosen dan tidak ikut di repo.
