#include <stdio.h>

int main() {
    char ime[20]="Dusan";
    char prezime[20]="Vulicevic";
    char indeks[10]="62/23";
    int godina;
    printf("Unesite godinu rodjenja: ");
    scanf("%d", &godina);

    printf("Ime i prezime: %s %s\n", ime, prezime);
    printf("Broj indeksa: %s\n", indeks);
    printf("Godina rodjenja: %d\n", godina);

    if ((godina % 4 == 0) {
        printf("Rodjeni ste u prestupnoj godini.\n");
    } else {
        printf("Niste rodjeni u prestupnoj godini.\n");
    }
	return 0;
}

    return 0;
}
