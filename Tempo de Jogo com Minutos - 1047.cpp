#include <iostream>
#include<iomanip>
#include<cstdlib>
#include<math.h>

using namespace std;

int main(){
	int horaI, minI, horaF, minF;
	cin>>horaI>> minI>> horaF>> minF;
	
	if(horaI == horaF && minI == minF){
		cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
	}
	else if(horaF < horaI && minF - minI < 0){
        cout<<"O JOGO DUROU "<< 24 - abs(horaF - horaI) - 1 << " HORA(S) E "<< 60 - abs(minF - minI)<< " MINUTO(S)"<<endl;
	}
	else if(horaF < horaI){
        cout<<"O JOGO DUROU "<< 24 - abs(horaF - horaI)<< " HORA(S) E "<< minF - minI<< " MINUTO(S)"<<endl;
	}
	else if (minF - minI < 0){
		cout<<"O JOGO DUROU "<< horaF - horaI - 1<< " HORA(S) E "<< 60 - abs(minF - minI)<< " MINUTO(S)"<<endl;
	}else{
		cout<<"O JOGO DUROU "<< horaF - horaI<< " HORA(S) E "<< minF - minI<< " MINUTO(S)"<<endl;
	}
	
	system("PAUSE");
	return 0;
}
