package com.sleepycat.je.rep.impl.networkRestore;
import static com.sleepycat.je.rep.impl.networkRestore.NetworkBackupStatDefinition.BACKUP_FILE_COUNT;
import static com.sleepycat.je.rep.impl.networkRestore.NetworkBackupStatDefinition.DISPOSED_COUNT;
import static com.sleepycat.je.rep.impl.networkRestore.NetworkBackupStatDefinition.EXPECTED_BYTES;
import static com.sleepycat.je.rep.impl.networkRestore.NetworkBackupStatDefinition.FETCH_COUNT;
import static com.sleepycat.je.rep.impl.networkRestore.NetworkBackupStatDefinition.SKIP_COUNT;
import static com.sleepycat.je.rep.impl.networkRestore.NetworkBackupStatDefinition.TRANSFERRED_BYTES;
import static com.sleepycat.je.rep.impl.networkRestore.NetworkBackupStatDefinition.TRANSFER_RATE;
import java.io.Serializable;
import com.sleepycat.je.utilint.LongAvgRateStat;
import com.sleepycat.je.utilint.StatGroup;
public class NetworkBackupStats implements Serializable
