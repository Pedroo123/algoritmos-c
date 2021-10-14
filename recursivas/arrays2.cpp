using namespace std;

int main()
{
    int i, n;
    float arr[100];
    float vazio[];

    cout << "Insira o numero de elementos (1 a 100) : ";
    cin >> n;
    cout << endl;

    //Salva os numero digitado de acordo com o tamanho do array
    for(i = 0; i < n; ++i)
    {
       cout << "Insira um numero " << i + 1 << " : ";
       cin >> arr[i];
    }

    //Percorre o array e adiciona os indices em um novo array
    for(i = 1;i < n; ++i)
    {
       cin >> vazio[i];
    }
    
	cout << "Novo array = " << vazio[n];

    return 0;
}