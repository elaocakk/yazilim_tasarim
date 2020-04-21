package builderpattern;

public class Reader {
	
    public void Create(BookBuilder builder)
    {
        builder.buildIsim();
        builder.buildYazar();
        builder.buildSayfaSayisi();
        builder.buildBasimYili();
        builder.buildYayınEvi();
        builder.buildKategori();
        builder.buildIsbn();
      
    }
}

 
 
