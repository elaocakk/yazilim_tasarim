package observer;

public class Takipci3 extends Observer{

   public Takipci3(Blogger b){
      this.blogger = b;
   }
   @Override
   public void guncellemeYap() {
	   System.out.println( "Takipci3'e güncelleme bildirimi gonderildi");
	   System.out.println( " Durum: " + blogger.getDurum() ); 
       System.out.println( " Yazi basligi: " + blogger.getYaziBaslik() ); 
       System.out.println( " Yazi: " + blogger.getYazi() ); 
   }
   @Override
   public void bildirimAl() {
	   this.blogger.observerEkle(this);
	   System.out.println( "Takipci3'e bildirim gönderilmesi islemi kabul edildi");
   }
   @Override
   public void bildirimAlmayiBirak() {
	   this.blogger.observerSil(this);
	   System.out.println( "Takipci3'e bildirim gönderilmesi islemi iptal edildi");
   }

}