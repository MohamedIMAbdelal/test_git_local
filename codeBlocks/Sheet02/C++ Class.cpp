
class rectangle
{
private :
    float length ;
    float width;

public:
    void getLength(float len)
    {
        if(len >= 0)
            length = len;
        else
            cout<<"Enter only positive numbers : "<<"\n";
    }
    void getWidth(float wid)
    {
         if(wid >= 0)
            width = wid;
        else
            cout<<"Enter only positive numbers : "<<"\n";
    }
    void printArea()
    {
        cout<<"Area of this rectangle = "<<length<<" * "<<width<<" = "<<length*width<<"\n";
    }

};



















