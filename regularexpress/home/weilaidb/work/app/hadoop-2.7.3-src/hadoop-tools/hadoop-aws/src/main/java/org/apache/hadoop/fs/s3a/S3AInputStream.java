package org.apache.hadoop.fs.s3a;
import com.amazonaws.services.s3.AmazonS3Client;
import com.amazonaws.services.s3.model.GetObjectRequest;
import com.amazonaws.services.s3.model.S3Object;
import com.amazonaws.services.s3.model.S3ObjectInputStream;
import org.apache.hadoop.fs.FSExceptionMessages;
import org.apache.hadoop.fs.FSInputStream;
import org.apache.hadoop.fs.FileSystem;
import org.slf4j.Logger;
import java.io.EOFException;
import java.io.IOException;
import java.net.SocketTimeoutException;
import java.net.SocketException;
public class S3AInputStream extends FSInputStream
