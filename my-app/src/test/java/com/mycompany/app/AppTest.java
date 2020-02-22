package com.mycompany.app;

import org.junit.jupiter.api.Test;

import static org.hamcrest.CoreMatchers.is;
import static org.hamcrest.MatcherAssert.assertThat;
import static org.junit.jupiter.api.Assertions.*;

public class AppTest {
    @Test
    public void shouldAnswerWithTrue() {
        App app = new App();
        assertThat(app.add(1, 1), is(2));
        assertEquals(2, app.add(1, 1));
        assertTrue(true);
    }
}
