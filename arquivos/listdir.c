#include <stdio.h> 
#include <dirent.h> 
  
int main(void) 
{ 
    struct dirent *de;  // Pointer for directory entry 
  
    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("arquivos"); 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory 
    { 
        printf("Não foi possível abrir o diretório !" ); 
        return 0; 
    }
  
    // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html 
    // for readdir() 
    while ((de = readdir(dr)) != NULL){ 
            if(de->d_name)
            printf("%s\n", de->d_name);
    } 
  
    closedir(dr); 
    printf("\n\n\n");
    getchar();
    getchar();
    return 0; 
} 