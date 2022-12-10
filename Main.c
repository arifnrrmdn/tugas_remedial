#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    //  deklarasi
    char nama[30];
    int tipe,lama_pinjam,harga_sewa,sopir,biaya_sopir,lagi; 
    
    do
    {
    system("cls");
    puts("RENTAL MOBIL EXCELENT");
    puts("----------------------------------");
    puts("Tipe Mobil     Harga per 12 Jam");
    puts("1.Minibus        Rp.350.000");
    puts("2.Sedan          Rp.400.000");
    puts("3.MPV            Rp.450.000");
    puts("4.SUV            Rp.550.000");
    puts("----------------------------------");

    printf("Masukan nama peminjam       : "); fflush(stdin); gets(nama); 
    printf("Masukan tipe mobil          : "); scanf("%d",&tipe);
    printf("Lama pinjam (Hari)          : "); scanf("%d",&lama_pinjam); 
    printf("Sopir 1=[YA] 0=[TIDAK]      : "); scanf("%d",&sopir);  

    switch(tipe){
        case 1:
            puts("\nMobil yang dipilih = MINIBUS");
            biaya_sopir = 0;
            if(sopir == 1){
                biaya_sopir = lama_pinjam * 200000;
            }
            harga_sewa = (lama_pinjam * 350000) + biaya_sopir;
            printf("Nama Konsumen = %s\n",nama);
            printf("Total = %d", harga_sewa);
            break;
        case 2:
            puts("\nMobil yang dipilih = SEDAN");
            biaya_sopir = 0;
            if(sopir == 1){
                biaya_sopir = lama_pinjam * 200000;
            }
            harga_sewa = (lama_pinjam * 400000) + biaya_sopir;
            printf("Nama Konsumen = %s\n",nama);
            printf("Total = %d", harga_sewa);
            break;
        case 3:
            puts("\nMobil yang dipilih = MPV");
            biaya_sopir = 0;
            if(sopir == 1){
                biaya_sopir = lama_pinjam * 200000;
            }
            harga_sewa = (lama_pinjam * 450000) + biaya_sopir;
            printf("Nama Konsumen = %s\n",nama);
            printf("Total = %d", harga_sewa);
            break;
        case 4:
            puts("\nMobil yang dipilih = SUV");
            biaya_sopir = 0;
            if(sopir == 1){
                biaya_sopir = lama_pinjam * 200000;
            }
            harga_sewa = (lama_pinjam * 550000);
            printf("Nama Konsumen = %s\n",nama);
            printf("Total =       %d", harga_sewa);
            break;
    }

    printf("\n\nHitung lagi? 1=[YA] 0=[TIDAK]   : "); scanf("%d",&lagi);

    } while (lagi == 1);
    
    getch();
    return 0;
}