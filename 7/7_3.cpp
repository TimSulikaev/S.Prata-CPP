#include <iostream>
using namespace std;
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void box_display(box);
float box_volume(box *);


int main(){
    box box_one = {
        "Snikers", 0.155, 0.140, 0.160
    };
    box_one.volume = box_volume(&box_one);
    box_display(box_one);
    return 0;
}

void box_display(box st){
    cout << st.maker << endl;
    cout << st.height << endl;
    cout << st.width << endl;
    cout << st.length << endl;
    cout << st.volume << endl;
}

float box_volume(box * st){
    return st->height * st->width * st->length;
}
