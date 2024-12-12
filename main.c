#include <stdio.h>

int main() {
    int key1 = 0;
    int key2 = 0;
    FILE *configFile = fopen("config.txt", "r");
    if (configFile == NULL) {
        perror("Error opening config file");
        return 1;
    }

    if (fscanf(configFile, "%d %d", &key1, &key2) != 2) {
        perror("Error reading config file");
        fclose(configFile);
        return 1;
    }
    fclose(configFile);
    printf("keyA: %d, keyB: %d\n", key1, key2);

    return 0;
}