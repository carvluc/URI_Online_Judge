#include<cstdio>

int main(){
	int diaI, diaF, horaI, horaF, minI, minF, segI, segF, w, x, y, z;
	
	scanf("Dia %d", &diaI);
    scanf("%d : %d : %d\n", &horaI, &minI, &segI);
    scanf("Dia %d", &diaF);
    scanf("%d : %d : %d", &horaF, &minF, &segF);
		
	z = segF - segI;
	y = minF - minI;
	x = horaF - horaI;
	w = diaF - diaI;
	
	if (z < 0) {
        z += 60;
        y--;
    }

    if (y < 0) {
        y += 60;
        x--;
    }

    if (x < 0) {
        x += 24;
        w--;
    }
	
	printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);

	return 0;
}
