package builderpattern;

public abstract class BookBuilder
{
    public abstract void buildIsim();  
    public abstract void buildYazar(); 
    public abstract void buildSayfaSayisi();  
    public abstract void buildBasimYili();   
    public abstract void buildYayınEvi();
    public abstract void buildKategori();
    public abstract void buildIsbn();
    public abstract Book getBook();
}
