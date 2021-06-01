package junit;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;

public class CalculatorTest {

    Calutor cal = new Calutor();

    @Test
    public void sum(){
        assertEquals(2, cal.add(1, 1));
    }
}
