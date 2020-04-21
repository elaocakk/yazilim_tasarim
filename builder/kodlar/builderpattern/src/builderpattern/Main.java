package builderpattern;

public class Main {

	public static void main(String[] args) {
		
		Reader reader = new Reader();
		
		BookBuilder builder = new NovelBuilder();
		reader.Create(builder);
		Book book = builder.getBook();
		System.out.println(book.getOrnek());

		BookBuilder builder2 = new TaleBuilder();
		reader.Create(builder2);
		Book book2 = builder2.getBook();
		System.out.println(book2.getOrnek());
		
		BookBuilder builder3 = new BiographyBuilder();
		reader.Create(builder3);
		Book book3 = builder3.getBook();
		System.out.println(book3.getOrnek());
	}

}
