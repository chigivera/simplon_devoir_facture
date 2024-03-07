#include <stdio.h>

int main() {
    char nomClient[50];
    char nomArticle1[50], nomArticle2[50], nomArticle3[50];
    float prixArticle1, prixArticle2, prixArticle3;
    int quantiteArticle1, quantiteArticle2, quantiteArticle3;
    float totalHT, TVA, montantTVA, totalTTC;
    char modePaiement[20];

    // Entrée des informations de la facture
    printf("Nom du client : ");
    scanf("%s", nomClient);

    printf("Article 1 :\n");
    printf("Nom : ");
    scanf("%s", nomArticle1);
    printf("Prix : ");
    scanf("%f", &prixArticle1);
    printf("Quantite : ");
    scanf("%d", &quantiteArticle1);

    printf("Article 2 :\n");
    printf("Nom : ");
    scanf("%s", nomArticle2);
    printf("Prix : ");
    scanf("%f", &prixArticle2);
    printf("Quantite : ");
    scanf("%d", &quantiteArticle2);

    printf("Article 3 :\n");
    printf("Nom : ");
    scanf("%s", nomArticle3);
    printf("Prix : ");
    scanf("%f", &prixArticle3);
    printf("Quantite : ");
    scanf("%d", &quantiteArticle3);

    totalHT = prixArticle1 * quantiteArticle1 + prixArticle2 * quantiteArticle2 + prixArticle3 * quantiteArticle3;

    printf("Taux de TVA : ");
    scanf("%f", &TVA);
    montantTVA = totalHT * (TVA / 100);
    totalTTC = totalHT + montantTVA;

    printf("Mode de paiement : ");
    scanf("%s", modePaiement);

    // Affichage de la facture avec #
    printf("\n#################################################################\n");
    printf("#                         Facture                                 #\n");
    printf("#################################################################\n");
    printf("# Nom du client : %s\n", nomClient);
    printf("# Articles :\n");
    printf("# - %s : %.2f x %d\n", nomArticle1, prixArticle1, quantiteArticle1);
    printf("# - %s : %.2f x %d\n", nomArticle2, prixArticle2, quantiteArticle2);
    printf("# - %s : %.2f x %d\n", nomArticle3, prixArticle3, quantiteArticle3);
    printf("# Total HT : %.2f\n", totalHT);
    printf("# TVA (%.2f%%) : %.2f\n", TVA, montantTVA);
    printf("# Total TTC : %.2f\n", totalTTC);
    printf("# Mode de paiement : %s\n", modePaiement);
    printf("#################################################################\n");

    return 0;
}
