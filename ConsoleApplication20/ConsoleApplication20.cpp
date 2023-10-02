#include <iostream>
#include <locale>
using namespace std;

class MobilePhone;

class Man {
private:
    int happy;
    int anger;
    int hungry;
    const int number_of_hands = 2;
    const int number_of_eyes = 2;
    string eye_color = "green";
    string fur_color = "black";
public:
    string name;
    void SetHappy(int happy) {
        if (happy >= 0 && happy <= 100) {
            this->happy = happy;
        }
    }
    const int GetHappy() {
        return happy;
    }
    void SetHungry(int hungry) {
        if (hungry >= 0 && hungry <= 100) {
            this->hungry = hungry;
        }
    }
    const int GetHungry() {
        return hungry;
    }
    const int GetNumberOfEyes() {
        return number_of_eyes;
    }
    const int GetNumberOfHands() {
        return number_of_hands;
    }
    void SetAnger(int anger) {
        if (anger > 0 && anger < 100) {
            this->anger = anger;
        }
    }
    const int GetAnger() {
        return anger;
    }
    void PickUp(MobilePhone& what) {
        cout << "Телефон в руках)" << endl;
    }

    void Dance() {
        if (hungry >= 70) {
            cout << "Я голодный!" << endl;
        }
        else {
            cout << name << " танцює" << endl;
        }
    }

    void StopDance() {
        cout << "Микита припинив танцювати" << endl;
    }

    void Music(string executor) {
        cout << "Микита почав слухати музику " << executor << endl;
    }

    void Walk() {
        cout << "Микита поблукав" << endl;
    }

    void DoHomework() {
        if (hungry >= 70) {
            cout << "Я голодный!" << endl;
        }
        else {
            cout << "Микита почав виконувати домашнє завдання" << endl;
        }
    }
};

class Room {
private:
    int temperature;
    int bed_condition;
    int computer = 1;
    int doors = 1;
    int windows = 3;
    int bed = 1;
    string wallpaper_color = "blue";
    int chairs = 4;
public:
    void SetBed(int bed) {
        if (bed == 1) {
            this->bed = bed;
        }
    }
    int GetBed() {
        return bed;
    }
    void SetTemperature(int temperature) {
        if (temperature >= 0 && temperature <= 50) {
            this->temperature = temperature;
        }
    }
    int GetTemperature() {
        return temperature;
    }
    const int GetDoors() {
        return doors;
    }
    void SetComputer(int computer) {
        if (computer == 1) {
            this->computer = computer;
        }
    }
    const int GetComputer() {
        return computer;
    }
    void OpenTheDoor(Man& who) {
        cout << "Двері відчиняються" << endl;
    }

    void TurnOnTheComputer() {
        cout << "Чути, як ввімкнувся комп'ютер" << endl;
    }

    void LieOnTheBed() {
        if (bed_condition < 30) {
            cout << "Кровать сломалась!!!" << endl;
        }
        if (bed_condition >= 30) {
            cout << "Поздравляю, ви лягли на кровать!!!" << endl;
        }
    }

    void OpenTheWindow() {
        cout << "Вікно відчинено" << endl;
    }

    void SitOnChair() {
        cout << "Стул був з підвохом і ви впали" << endl;
    }
};

class MobilePhone {
private:
    int power;
    int brightness;
    const int front_camera = 1;
    const int back_camera = 3;
    string color = "Black";
    double diagonal = 6.06;
    const int side_button = 1;// ошибка какая-то
public:
    string model;
    SetDiagonal(int diagonal) {
        if (diagonal == 6.06) {
            this->diagonal = diagonal;
        }
    }
    GetDiagonal() {
        return diagonal;
    }
    void SetBackCamera(int back_camera) {
        if (back_camera == 1) {
            this->back_camera = back_camera;
        }
    }
    const int GetBackCamera() {
        return back_camera;
    }
    void SetSideButton(int side_button) {
        if (side_button == 1) {
            this->side_button = side_button;
        }
    }
    const int GetSideButton() {
        return side_button;
    }
    void SetBrightness(int brightness) {
        if (brightness >= 0 && brightness <= 100) {
            this->brightness = brightness;
        }
    }
    int GetBrightness() {
        return brightness;
    }
    void SetPower(int Power) {
        if (Power >= 0 && Power <= 100) {
            this->power = Power;
        }
    }
    const int GetPower() {
        return power;
    }
    void Interaction(Man& who) {
        cout << "Почалася взаємодія з кимось" << endl;
    }

    void OnPhone(Man& who) {
        if (power >= 5) {
            cout << "Телефон почав вмикається" << endl;
        }
        else {
            cout << "Треба вмикнути зарядку!" << endl;
        }
    }

    void DoSelfie(Man& who) {
        cout << "Вмикається фронтальна камера та вилетіла пташка" << endl;
    }

    void MakeCall() {
        cout << "Чути гудки..." << endl;
    }

    void PlayTheGame() {
        cout << "Вмикається гра" << endl;
    }

    void PostPhoto(Man& who) {
        cout << "Спочатку потрібно завантажити Instagram!" << endl;
    }
};

class Monkey {
private:
    int eyes;
    int hands;
    int ears;
    double wool_length = 0.4;
    string nick = "Arnold";
public:
    void SetEyes(int eyes) {
        if (eyes >= 0) {
            this->eyes = eyes;
        }
    }
    int GetEyes() {
        return eyes;
    }
    void SetHands(int hands) {
        if (hands >= 0) {
            this->hands = hands;
        }
    }
    int GetHands() {
        return hands;
    }
    void SetEars(int ears) {
        if (ears >= 0) {
            this->ears = ears;
        }
    }
    const int GetEars() {
        return ears;
    }
    void Eat(string food) {
        cout << "Беремо смачну " << food << " та починаємо їсти" << endl;
    }
    void Noise(Man& who) {
        if (ears == 0) {
            cout << "Арнольд не почув вас" << endl;
        }
        if (ears > 0) {
            cout << "Привітатися" << endl;
        }
    }
    void Sleep() {
        cout << "Арнольд у пошуках місця для дрімоти" << endl;
    }
    void Play() {
        if (hands == 2) {
            cout << "Арнольд починає гратися з друзями" << endl;
        }
        if (hands < 2) {
            cout << "Арнольд не в настрої!" << endl;
        }
    }
    void Dance() {
        cout << "Арнольд показує дуже класні рухи" << endl;
    }
};

class Car {
private:
    int fuel;
    int wheels = 6;
    int doors = 4;
    int number_of_seats = 7;
    string Color = "White";
    int steering_wheel = 1;
public:
    void SetNumberOfSeats(int number_of_seats) {
        if (number_of_seats == 7) {
            this->number_of_seats = number_of_seats;
        }
    }
    const int GetNumberOfSeats() {
        return number_of_seats;
    }
    void SetSteeringWheel(int steering_wheel) {
        if (steering_wheel == 1) {
            this->steering_wheel = steering_wheel;
        }
    }
    const int GetSteeringWheel() {
        return steering_wheel;
    }
    void SetDoors(int doors) {
        if (doors == 4) {
            this->doors = doors;
        }
    }
    const int GetDoors() {
        return doors;
    }
    void SetFuel(int fuel) {
        if (fuel >= 0) {
            this->fuel = fuel;
        }
    }
    const int GetFuel() {
        return fuel;
    }
    void SetWheels(int wheels) {
        if (wheels >= 0) {
            this->wheels = wheels;
        }
    }
    int GetWheels() {
        return wheels;
    }
    void WeStartTheEngine(Man& who) {
        if (wheels == 6 && fuel > 0) {
            cout << "Чути рев цього звіра" << endl;
        }
        else {
            cout << "Так справа не піде!)" << endl;
        }
    }
    void NeedToFixUrgently() {
        cout << "На панелі загорівся бензин, машині пора їсти" << endl;
    }
    void FastenSeatBelts() {
        cout << "Машина нагадує нам про безпеку і про те, що треба пристебнути ремені" << endl;
    }
    void NeedToFix() {
        cout << "Машина почуває себе не дуже, потрібно заїхати на СТО" << endl;
    }
    void RideBack() {
        if (wheels == 6 && fuel > 0) {
            cout << "Машина починає рухатися назад" << endl;
        }
        else {
            cout << "Так справа не піде!)" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "");
    Man m;
    MobilePhone p;
    Room r;

    m.name = "Nikita";
    p.model = "Iphone";

    r.OpenTheDoor(m);
    m.PickUp(p);
    p.Interaction(m);

    return 0;
}
