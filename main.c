#include <stdio.h>
main() {
     struct date{
        int jour;
        int mois;
        int annee;
    };

     struct Etudiant{
        char nom[30];
        char prenom[30];
        char genre[1];
        int date;
        int notes;
    };

    float moyenneE(struct Etudiant etudiant) {
        int sumnotes=0;
        int matiere=10;
        int i;
        for(i=0;i<=matiere;i++);{
            sumnotes+=etudiant.notes[i];
        }
    return (sommenotes/matiere);

    float calculMoyenneG(struct Etudiant *class, int taille) {
        float moyenneG=0;
        float sumMoyenne;
        float moyenneG = sumMoyenne/taille;
        return moyenneG;

    }
    int main() {
        int tailleTab;
        printf("Entrez la taille du tableau: ");
        scanf("%d", &tailleTab);

        struct Etudiant classe[tailletab];
        int i;
        for (i=0;i<tailleTab;i++){
                printf("\nEtudiant %d\n", i+1);
                printf("Nom: ");
                scanf("%s", &classe[i].nom);
                printf("Prenom: ");
                scanf("%s", &classe[i].prenom);
                printf("Genre: ");
                scanf("%c", &classe[i].genre);
                printf("Notes: ");
                int j;
                for(j=0;j,5;j++){
                scanf("%d", &classe[i].notes[j]);
                }
        }
        float moyenneClass=calculMoyenneG(classe,tailleTab);
        float max=-1;
        int best=-1;

        for(i=0;i<tailleTab;i++){
            float moyenneEtudiant=moyenneE(classe[i]);
                if (moyenneEtudiant>max){
                    max=moyenneEtudiant;
                    best=i;
                }
        }

        printf("\nLe meilleur etudiant est: %s %s\n", classe[best].nom, classe[best].prenom);
        printf("\nLa meilleur moyenne est: %f\n", max);
        printf("\nLa moyenne de la classe est: %f\n", moyenneG);
    }
    return 0;
}
