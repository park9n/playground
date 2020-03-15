package com.mycompany.app;


import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Properties;

public class App {
    private static final Logger logger = LoggerFactory.getLogger(App.class);

    public int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) throws IOException {
        logger.info("Example log from {}", App.class.getSimpleName());

        String rootPath = Thread.currentThread().getContextClassLoader().getResource("").getPath();
        String appConfigPath = rootPath + "application.properties";

        Properties appProps = new Properties();
        appProps.load(new FileInputStream(appConfigPath));
        String appVersion = appProps.getProperty("version");

        System.out.println("Hello World! " + appVersion);
    }
}
