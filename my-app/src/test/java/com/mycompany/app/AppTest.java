package com.mycompany.app;

import org.junit.jupiter.api.Test;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Properties;

import static org.hamcrest.CoreMatchers.is;
import static org.hamcrest.MatcherAssert.assertThat;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

public class AppTest {
    private static final Logger logger = LoggerFactory.getLogger(App.class);

    @Test
    public void shouldAnswerWithTrue() throws IOException {
        logger.info("Example log from {}", App.class.getSimpleName());
        App app = new App();
        assertThat(app.add(1, 1), is(2));
        assertEquals(2, app.add(1, 1));
        assertTrue(true);

        String rootPath = Thread.currentThread().getContextClassLoader().getResource("").getPath();
        String appConfigPath = rootPath + "test.properties";

        Properties appProps = new Properties();
        appProps.load(new FileInputStream(appConfigPath));
        String appVersion = appProps.getProperty("version");

        assertEquals("2.0", appVersion);
    }
}
