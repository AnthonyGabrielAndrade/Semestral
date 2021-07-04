using namespace std;
#include <math.h>

namespace TrianguloLibrary
{
  struct tTriangulos
  {
    double lado_a, lado_b, lado_c;
  };

   tTriangulos MeuTriangulo;  
    double escreveParametroA(){      
        cout << "Informe o cateto oposto"<< endl;
        cin >> MeuTriangulo.lado_a;
        return MeuTriangulo.lado_a;
    }  
    double escreveParametroB(){      
        cout << "Informe o cateto adjacente"<< endl;
        cin >> MeuTriangulo.lado_b;
        return MeuTriangulo.lado_b;
    }  
    double escreveParametroC(){      
        cout << "Informe o cateto hipotenusa"<< endl;
        cin >> MeuTriangulo.lado_c;
        return MeuTriangulo.lado_c;
    }  

      void RecebeParametros(){
      
        cout << "Informe o cateto oposto";
        cin >> MeuTriangulo.lado_a;
        cout << "Informe o cateto adjacente";
        cin >> MeuTriangulo.lado_b;
        cout << "Informe a hipotenusa";
        cin >> MeuTriangulo.lado_c;

        cout << MeuTriangulo.lado_a << " | " << MeuTriangulo.lado_b <<  " | " << MeuTriangulo.lado_c << endl;
    }

      void calculo_perimetro(){
        cout << "O valor do perimetro do triangulo é: " << MeuTriangulo.lado_a + MeuTriangulo.lado_b + MeuTriangulo.lado_c << endl;
      }

      void calculo_area(){
        cout << "O valor da area do triangulo é: " << (MeuTriangulo.lado_a * MeuTriangulo.lado_b) / 2 << endl;
      }

      void calculo_hipotenusa(){
        cout << "O valor da hipotenusa do triangulo é: " << sqrt((MeuTriangulo.lado_a * MeuTriangulo.lado_a) + MeuTriangulo.lado_b + MeuTriangulo.lado_b) << endl;
      }

}