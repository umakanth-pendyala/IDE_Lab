#include<stdio.h>
int lps[10];
char pattern[10],text[40];
int pat_len,txt_len;

void printlps(){
    for(int i=0;i<pat_len;i++){
        printf("%d\t",lps[i]);
    }
    printf("\n");

}
void lpsGenerate(){
    int i = 0, j = 1;
    lps[0] = 0;
    while(j<pat_len){
        if (pattern[i] == pattern[j]){
            i++;
            lps[j] = i;
            j++;
        }
        else if(i!=0){
            i = lps[i-1];
        }
        else {
            lps[j] = i;
            j++;
        }
        
    }
    printlps();
}

void read_text() {
    printf("Enter length of the text:");
    scanf(" %d",&txt_len);
    for (int i=0;i<txt_len;i++){
        scanf(" %c",&text[i]);
    }

    //gets(text);

}

void read_pattern() {
    printf("Enter length of the pattern:");
    scanf(" %d",&pat_len);
    for (int i=0;i<pat_len;i++){
        scanf(" %c",&pattern[i]);
    }
    //gets(pattern);

}

void KMP(){
    int i=0,j=0;
    int match = 0;
    int prev = -1;
    while(i<pat_len && j<txt_len){
        match = 0;
        if (pattern[i] == text[j]){
            i++;
            j++;
            if (prev == -1) prev = j-1;
            match = 1;
        }
        else if(i!=0){
            i=lps[i-1];
            if(i==0){
                j++;
            }
            prev = -1;
        }
        else{
            j++;
            prev = -1;
        }
        printf("i = %d, j = %d, match= %d, pattern=%c, text=%c\n",i,j,match,pattern[i],text[j]);
    }
    printf("i = %d, j = %d\n",i,j);
    printf("index is %d\n",/*j-pat_len+2*/prev);
}

int main() {
    read_text();
    read_pattern();
    lpsGenerate();
    KMP();
}