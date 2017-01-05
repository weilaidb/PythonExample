package org.apache.hadoop.mapred.pipes;
import java.io.*;
import java.util.*;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.mapred.*;
public class WordCountInputFormat
extends FileInputFormat<IntWritable, Text>
