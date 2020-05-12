package observer;

import java.util.ArrayList;
import java.util.List;

public class Blogger {
	
   private List<Observer> observers = new ArrayList<Observer>();
   private String durum;
   private String yaziBaslik;
   private String yazi;

   public String getDurum() {
      return durum;
   }
   public void setDurum(String durum) {
      this.durum = durum;
   }
   public String getYaziBaslik() {
		return yaziBaslik;
	}
   public void setYaziBaslik(String yaziBaslik) {
	   this.yaziBaslik = yaziBaslik;
	}
   public String getYazi() {
		return yazi;
	}
   public void setYazi(String yazi) {
		this.yazi = yazi;
	} 
   
   public void observerEkle(Observer observer){
	   if (observer == null) 
		   return;
	   observers.add(observer);		
   }
   public void observerSil(Observer observer){
		   if (observer != null) {
	   }
		   observers.remove(observer);		  
   }
   public void takipcilereHaberVer(){
	   for (Observer observer : observers) {
          observer.guncellemeYap();
         } 
   }
   
}
