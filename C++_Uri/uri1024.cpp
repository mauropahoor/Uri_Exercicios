    #include <iostream>
    #include <string>

    int main ()
    {
        std::ios::sync_with_stdio(false);

        int n;
        std::string texto, textoInvertido;

        std::cin >> n;
        std::cin.ignore(1);
        for (int i = 0; i < n; i++)
        {
            std::cin >> texto;
            textoInvertido = "";
            for(int i = 0; i < texto.length(); i++)
            {
                if(isupper(texto[i]) || islower(texto[i])) texto[i] += 3;
            }
            for (int i = texto.length() - 1; i >= 0 ; i--)
            {
                textoInvertido += texto[i];
            }
            for(int i = textoInvertido.length() / 2; i < textoInvertido.length(); i++)
            {
                textoInvertido[i]--;
            }
            std::cout << textoInvertido << '\n';   
        }
    }