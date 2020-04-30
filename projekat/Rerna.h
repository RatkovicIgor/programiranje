#ifndef RERNA_H
#define RERNA_H


class Rerna
{
private:
    int temperatura,vreme,brojposuda;
    bool upaljen;
public:
    Rerna konstruktor()
    {
        temperatura=21;
        vreme=0;
        brojposuda=0;
    }
    Rerna upali()
    {
        if(upaljen==false)
        {
            upaljen=true;
            cout<<"rerna je upaljena"<<endl;
        }
        else
        {
            cout<<"rerna je vec upaljena"<<endl;
        }
    }
    Rerna promenitemperaturu(int novatemp)
    {
        if(upaljen==true)
        {
            temperatura=novatemp;
        }
        else
            cout<<"rerna nije upaljena"<<endl;
    }
    Rerna ugasi()
    {
        if(upaljen==true)
        {
            upaljen=false;
            temperatura=21;
            vreme=0;
            cout<<"rerna je ugasena"<<endl;
            ///------------------------------------------------------------------
        }
        else
            cout<<"rerna je vec ugasena"<<endl;
    }
    Rerna podesivreme(int t)
    {
        vreme=t;
    }
    Rerna ubaciposudu()
    {
        if(0<posuda<4)
        {
                    Posuda++;
                    cout<<"ubacili ste posudu"<<endl;
        }
        else
            cout<<"rerna je puna"<<endl;
    }
    Rerna izvadiposudu()
    {
        if(0<posuda<4)
        {
                    Posuda--;
                    cout<<"izvadili ste posudu"<<endl;
        }
        else
            cout<<"rerna je prazna"<<endl;
    }
};

#endif // RERNA_H
