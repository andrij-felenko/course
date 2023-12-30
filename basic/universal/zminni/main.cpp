#include <iostream> // input output stream
#include <vector>

using namespace std;

int trataZaMisiac(std::string missiac)
{
    int veterinar;
    int jizha;
    int rozchistka;
    int vitaminy;
    int mazi;

    cout << missiac << "\n";
    cout << "\nckilky za veterynara:\n";
    cin >> veterinar;
    cout << "ckilky za jizha:\n";
    cin >> jizha;
    cout << "\nckilky za rozchistka:\n";
    cin >> rozchistka;
    cout << "\nckilky za vitaminy:\n";
    cin >> vitaminy;
    cout << "\nckilky za mazi:\n";
    cin >> mazi;
    return veterinar + jizha + rozchistka + vitaminy + mazi;
}

int filterPoVazi(std::vector <int> v, int x)
{
    int count = 0;
    for (int it : v){
        if (it < x)
            count += 1;
    }
    return count;
}

int bukvyPlus (std::string stroka, char ch)
{
    int count = 0;
    for (auto bukva: stroka){
        if (bukva == ch)
            count += 1;
    }
    return count;
}

// типи данних
void baseDataTypes()
{
    std::string stroka = "sadsdffdsdfsd setg aewrtg reag dsrg";

    bool virno_nevirno;
    float malenke_drobove_chyslo;
    double velyke_drobove_chyslo;
    char bukva = 'W';
    int cile;
    long dovge_cile;
    long long dovge_dovge_cile;

    /// базові операції
    /// + додати
    /// - відняти
    /// * помножити
    /// / поділити
    ///
    /// += те саме що і  i = i + 5  i += 5
    /// -= те саме що і  i = i - 5  i -= 5
    /// *= те саме що і  i = i * 5  i *= 5
    /// /= те саме що і  i = i / 5  i /= 5
    ///
    /// == порівняння
    /// =  присвоєння
    ///
    /// ++  те саме що і  i = i + 1
    /// --  те саме що і  i = i - 1
}

std::vector <int> changeMassiveToVector()
{
    int vaga[10] = { 72, 17, 56, 2, 89, 112, 17, 69, 54, 13 };
    std::vector <int> vaga_vector;

    for (int i = 0; i < 10; i += 1){
        vaga_vector.push_back(vaga[i]);
    }

    for (int currentVaga : vaga_vector){
        cout << "\n" << currentVaga;
    }
    return vaga_vector;
}

// перша функція, виклик її
void firstFunction()
{
    int vutratyly_za_december = trataZaMisiac("December");
    cout << "\nvutratyly_za_december: " << vutratyly_za_december << "\n\n";

    trataZaMisiac("November");

    trataZaMisiac("October");
}

// функція що викликає інші функції що повертають якісь значеняя
void secondFunction()
{
    int c = 0;
    std::vector <int> vaga_vector = changeMassiveToVector();
    c = filterPoVazi(vaga_vector, 20);

    cout << "\n" << c
         << "\n count:" << filterPoVazi(vaga_vector, 20)
         << "\n"        << filterPoVazi(vaga_vector, 10)
         << "\n"        << filterPoVazi(vaga_vector, 40);

    std::string str = "jyhgfc jygcd utc  jytfc htf";
    cout << "\n count:" << bukvyPlus (str, 'j')
         << "\n" << bukvyPlus (str, 'g')
         << "\n" << bukvyPlus (str, 'a')
         << "\n" << bukvyPlus (str, ' ');
}

// оператори if - else if - else і switch
void if_else_switch()
{
    cout << "chislo\n";
    double chislo1;
    cin >> chislo1;
    cout << "chislo\n";
    double chislo2;
    cin >> chislo2;
    cout << "dija\n";
    char dija;
    cin >> dija;

    double resultat = 0;

    if      (dija == '+') resultat = chislo1 + chislo2;
    else if (dija == '-') resultat = chislo1 - chislo2;
    else if (dija == '*') resultat = chislo1 * chislo2;
    else if (dija == '/') resultat = chislo1 / chislo2;
    else    cout << "ty ne te vviv\n";

    cout << "\nresultat = " << resultat;

    switch (dija){
    case '+': resultat = chislo1 + chislo2; break;
    case '-': resultat = chislo1 - chislo2; break;
    case '*': resultat = chislo1 * chislo2; break;
    case '/': resultat = chislo1 / chislo2; break;
    default: cout << "ty ne te vviv\n";
    }
    cout << "\nresultat = " << resultat;
}

// цикли while, for
void cycles()
{
    // оголошення масиву, якщо одразу його ініціалізуємо(заповнюємо),
    // то розмір можна не вказувати
    int vagony[10] = { 72, 17, 56, 2, 89, 112, 17, 69, 54, 13 };

    int massive[2];
    // через квадратні скобки отримаємо доступ до елементів масиву по індексу
    massive[0] = 15;
    massive[1] = 56;

    //  цикл з передумовою
    int summaLudej = 0;
    int iterator = 0;
    while (iterator < 10){ // - всередині круглих дужок умова при якій цикл буде продовжуватись
        summaLudej += vagony[iterator];
        iterator++;
    }

    // цикл з післяумовою, тіло циклу виконується принаймні один раз
    summaLudej = 0;
    iterator = 0;
    do {
        summaLudej += vagony[iterator];
        iterator++;
    } while (iterator < 10);
    // ===================================================================

    summaLudej = 0;
    for (int iterator = 0; iterator < 10; iterator++){
        summaLudej += vagony[iterator];
    }

    vector <int> vagonyV;
    for (int i = 0; i < 10; i++){
        vagonyV.push_back(vagony[i]);
    }

    summaLudej = 0;
    for (int vagon : vagonyV){
        summaLudej += vagon;
    }
}

int main()
{
    return 0;
}
