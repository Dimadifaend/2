#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    double h, A, k, Dlina, v_end, S_full, S_horizontal;
    const double g = 9.81;

    printf("¬ведите высоту горки h в метрах: ");
    scanf("%lf", &h);

    printf("¬ведите угол наклона A(рад): ");
    scanf("%lf", &A);

    printf("¬ведите коэффициент трени€ k: ");
    scanf("%lf", &k);   

    Dlina = h / sin(A);
    double a = g * (sin(A) - k * cos(A));
    v_end = sqrt(2 * a * Dlina);
    S_horizontal = (v_end * v_end) / (2 * k * g);
    S_full = Dlina + S_horizontal;

    printf("\n–езультат\n");
    printf("ќбщий путь(S), который проедут санки равен: %.2f\n", S_full);

    system("pause");
}