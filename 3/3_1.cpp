int main(){
    using namespace std;
    const int foot_in_inch = 12;
    int height;
    cout << "Enter your height: " << endl << "____\r";
    cin >> height;
    cout << "Your height is " << height / foot_in_inch << " feets and ";
    cout << height % foot_in_inch << " inches";
    return 0;
}
