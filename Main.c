#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char nama[30],lagi;
    int tipe,lama_pinjam,harga_sewa,sopir,biaya_sopir; 
    
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
            biaya_sopir = 0;
            if(sopir == 1){
                biaya_sopir = lama_pinjam * 200000;
            }
            harga_sewa = (lama_pinjam * 350000) + biaya_sopir;
            printf("\nNama Konsumen       = %s\n",nama);
            printf("Mobil yang dipilih  = MINIBUS");
            printf("Total               = Rp.%d", harga_sewa);
            break;
        case 2:
            biaya_sopir = 0;
            if(sopir == 1){
                biaya_sopir = lama_pinjam * 200000;
            }
            harga_sewa = (lama_pinjam * 400000) + biaya_sopir;
            printf("\nNama Konsumen       = %s\n",nama);
            printf("Mobil yang dipilih  = SEDAN\n");
            printf("Total               = Rp.%d", harga_sewa);
            break;
        case 3:
            biaya_sopir = 0;
            if(sopir == 1){
                biaya_sopir = lama_pinjam * 200000;
            }
            harga_sewa = (lama_pinjam * 450000) + biaya_sopir;
            printf("\nNama Konsumen       = %s\n",nama);
            printf("Mobil yang dipilih  = MPV");
            printf("Total               = Rp.%d", harga_sewa);
            break;
        case 4:
            biaya_sopir = 0;
            if(sopir == 1){
                biaya_sopir = lama_pinjam * 200000;
            }
            harga_sewa = (lama_pinjam * 550000);
            printf("\nNama Konsumen      = %s\n",nama);
            printf("Mobil yang dipilih = SUV");
            printf("Total              = Rp.%d", harga_sewa);
            break;
    }

    printf("\n\nHitung lagi? y/n : "); scanf("%s",&lagi);

    } while (lagi == 'y' || lagi == 'Y');
    
    getch();
    return 0;
}