#include "res.h"
#include <qmath.h>

res::res(QWidget *parent) : QLabel(parent)
{
    renk = qRgb(255,255,0);
    QImage ortam(600,600,QImage::Format_RGB32);
    setPixmap(QPixmap::fromImage(ortam));
    resim = ortam;

}

void res::bresenham(){

     int x1 = ilknokta.x();
     int x2 = sonnokta.x();
     int y1 = ilknokta.y();
     int y2 = sonnokta.y();
     int dx1,dy1,g;

     if(x2>x1){
         dx1=x2-x1;
     }
     else{
         dx1=x1-x2;
     }

     if(y2>y1){
        dy1=y2-y1;
     }
     else{
        dy1=y1-y2;
     }

     //ilk eksen
     if(dx1>=dy1){

        g=2*dy1-dx1;

        while (x1!=x2) {

            if(g>0){
                if(x1<x2){
                    x1++;
                }
                else{
                    x1--;
                }
                if(y1<y2){
                    y1++;
                }
                else{
                    y1--;
                }
                g=g+(2*(dy1-dx1));
                resim.setPixel((x1),(y1),renk);
                setPixmap(QPixmap::fromImage(resim));
            }
            else{
                if(x1<x2){
                    x1++;
                }
                else{
                    x1--;
                }
                g=g+(2*dy1);
                resim.setPixel((x1),(y1),renk);
                setPixmap(QPixmap::fromImage(resim));
            }
        }
     }

     // diğer eksenler
     if(dx1<dy1){

         g=(2*dx1)-dy1;

         while(y1!=y2){

             if(g>=0){
                if(x1<x2){
                    x1++;
                }
                else{
                    x1--;

                }
                if(y1<y2){
                    y1++;
                }
                else{
                    y1--;
                }
                g=g+(2*(dx1-dy1));
                resim.setPixel((x1),(y1),renk);
                setPixmap(QPixmap::fromImage(resim));
            }
            else{
                if(y1<y2){
                    y1++;
                }
                else{
                    y1--;
                }
                g=g+(2*dx1);
                resim.setPixel((x1),(y1),renk);
                setPixmap(QPixmap::fromImage(resim));
            }
         }
    }
}

void res::mousePressEvent(QMouseEvent *e)
{
    if (kontrol % 2 == 0 ) {
        ilknokta = e->pos();
        kontrol++;
    }else{
        sonnokta = e->pos();
        kontrol++;
        bresenham();
    }
}

