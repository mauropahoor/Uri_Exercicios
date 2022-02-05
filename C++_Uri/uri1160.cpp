    #include <iostream>

    int main ()
    {
        std::ios::sync_with_stdio(false);

        double g1, g2;
        int N, pa, pb, t;

        std::cin >> N;
        for (int i = 0; i < N; i++)
        {   
            std::cin >> pa >> pb >> g1 >> g2;
            t = 0;
            do
            {
                pa += (pa * (g1/100));
                pb += (pb * (g2/100));
                t++;
                if (t > 100) break;
            } while (pa <= pb);   

            if (t > 100)
            {
            std::cout << "Mais de 1 seculo.\n";
            }
            else
            {
            std::cout << t << " anos.\n";
            }
        }
        
    }