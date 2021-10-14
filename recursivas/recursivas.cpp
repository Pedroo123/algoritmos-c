using namespace std;

int main()
{
    int i, n;
    float arr[100];
    float maior[];
    float menor[];

    cout << "Insira o numero de elementos (1 a 100) : ";
    cin >> n;
    cout << endl;

    //Salva os numero digitado de acordo com o tamanho do array
    for(i = 0; i < n; ++i)
    {
       cout << "Insira um numero " << i + 1 << " : ";
       cin >> arr[i];
    }

    //Percorre o array para entcontrar o maior e menor elemento e salvar no indice 0
    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i])
           maior[0] = arr[i];
        else  if(arr[0] > arr[i]) {
        	menor[0] = arr[i];	
		}
    }
    cout << "Maior elemento = " << maior[0];
    cout << "Menor elemento = " << menor[0];
    
    recursiva(menor[], maior[]);

    return 0;
}

float recursiva(float arr1[], float arr2[]) {
	
	int j = 0;
	float novoArray[];
	
	if (arr1[j] <= arr2[j]) {
		cout << j + 1;
		cin >> novoArray[j];
	}
	
	cout << "Elementos : " << novoArray[j];
	
	return novoArray[j];
}

float somaRecursiva(float arrayMenor[]) {
	
	int k = 0;
	float resultado;
	
	cout << k + 1;
	
	resultado = somaRecursiva(arrayMenor[k]);
}