
fn declaracoes_if() { 

    let temperatura = 35; 

    if temperatura > 30 {
  
        println!("Muito quente lá fora!");
  
    } else if temperatura < 10 {
  
        println!("Muito frio, não saia!");
  
    } else {
  
        println!("Temperatura está agradável.");
  
    }

    let dia = if temperatura > 20 { "ensolarado" } else { "nublado" };
    println!("O dia esta {}.", dia);
 
    println!(
        "Está {}.",
        if temperatura > 20 {
            "quente"
        } else if temperatura < 10 {
            "frio"
        } else {
            "agradável"
        }
    );

    println!(
        "Está {}",
        if temperatura > 20 {
            if temperatura > 30 {
                "muito quente"
            } else {
                "quente"
            }
        } else if temperatura < 10 {
            "frio"
        } else {
            "agradável"
        }
    );
}

fn padrao_math() {
    
}



fn main() {
    
    declaracoes_if();
}
