package observer;

public class Takipci2 extends Observer{

   public Takipci2(Blogger b){
      this.blogger = b;
   }
   @Override
   public void guncellemeYap() {
	   System.out.println( "Takipci2'e güncelleme bildirimi gonderildi");
	   System.out.println( " Durum: " + blogger.getDurum() ); 
       System.out.println( " Yazi basligi: " + blogger.getYaziBaslik() ); 
       System.out.println( " Yazi: " + blogger.getYazi() ); 
   }
   @Override
   public void bildirimAl() {
	   this.blogger.observerEkle(this);
	   System.out.println( "Takipci2'e bildirim gönderilmesi islemi kabul edildi");
   }
   @Override
   public void bildirimAlmayiBirak() {
	   this.blogger.observerSil(this);
	   System.out.println( "Takipci2'e bildirim gönderilmesi islemi iptal edildi");
   }

}