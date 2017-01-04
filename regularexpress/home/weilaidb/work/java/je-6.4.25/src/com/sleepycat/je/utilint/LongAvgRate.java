package com.sleepycat.je.utilint;
import static java.util.concurrent.TimeUnit.MILLISECONDS;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.concurrent.TimeUnit;
public class LongAvgRate extends MapStatComponent<Long, LongAvgRate>
