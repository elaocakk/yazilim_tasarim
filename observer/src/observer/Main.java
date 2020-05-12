package observer;

public class Main extends Thread{

   public static void main(String[] args) {
	   		 
	  Runnable th1=(Runnable) new Main();
	  Runnable th2=(Runnable) new Main();
	  Runnable th3=(Runnable) new Main();
	  new Thread(th1).start();
	  new Thread(th2).start();
	  new Thread(th3).start();
   }
   
   @Override
    public void run() {
        try {
          System.out.println(this.getName());	
          Blogger blog = new Blogger();
          
		  Takipci1 t1 = new Takipci1(blog);
		  Takipci2 t2 = new Takipci2(blog);
		  Takipci3 t3 = new Takipci3(blog);
		  Takipci4 t4 = new Takipci4(blog);
  		  t1.bildirimAl();
  	      t2.bildirimAl();
  	      t3.bildirimAl();
  	      t4.bildirimAl();
  	      
  	      System.out.println("Blogta yeni bir yazi yayinlandi!!");	
  	      
  	      blog.setYaziBaslik("Simmons, Jordan ve LeBron arasındaki farkı açıkladı.");
  	      blog.setYazi("Ünlü spor yorumcusu Bill Simmons, Chicago Bulls efsanesi Michael Jordan ve Los Angeles Lakers süperstarı LeBron James arasındaki farkları açıkladı.");
  	      blog.setDurum("yeni yazi eklendi");
  	      blog.takipcilereHaberVer();
  
  	      t2.bildirimAlmayiBirak();
  	      t4.bildirimAlmayiBirak();
  	      
  	      System.out.println("Blogta yeni bir yazi yayinlandi!!");	
  	      
  	      blog.setYaziBaslik("Draft, Agustos sonu-Eylul başında olabilir!");
  	      blog.setYazi("New York Post'tan Marc Berman, 2020 NBA Draftı'nın Agustos sonunda ya da Eylul basinda baslayabilcegini belirtti.  ");
  	      blog.setDurum("yeni yazi eklendi");
  	      blog.takipcilereHaberVer();
  	      
  	      t2.bildirimAl();
  	      t3.bildirimAlmayiBirak();
  	      
  	      System.out.println("Blogta yeni bir yazi yayinlandi!!");	
  	    
  	      blog.setYaziBaslik("LeBron, Jerry West'in günümüz ortalamalarını tahmin etti");
	      blog.setYazi("Los Angeles Lakers süperstarı LeBron James, NBA efsanesi Jerry West'in bugünün NBA'inde hala üretken bir oyuncu olacağına inandığını söyledi.");
	      blog.setDurum("yeni yazi eklendi");
	      blog.takipcilereHaberVer();
         
  	      Thread.sleep(500); 
        } catch (Exception ex) {
            System.err.println(ex);
        }
    }
   	    
}

