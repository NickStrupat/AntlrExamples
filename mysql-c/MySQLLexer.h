/*
 * Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation. The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have included with MySQL.
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/


// Generated from MySQLLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


#include "MySQLBaseLexer.h"


namespace parsers {


class PARSERS_PUBLIC_TYPE MySQLLexer : public MySQLBaseLexer {
public:
  enum {
    NOT2_SYMBOL = 1, CONCAT_PIPES_SYMBOL = 2, INNODB_SYMBOL = 3, INT_NUMBER = 4, 
    LONG_NUMBER = 5, ULONGLONG_NUMBER = 6, EQUAL_OPERATOR = 7, ASSIGN_OPERATOR = 8, 
    NULL_SAFE_EQUAL_OPERATOR = 9, GREATER_OR_EQUAL_OPERATOR = 10, GREATER_THAN_OPERATOR = 11, 
    LESS_OR_EQUAL_OPERATOR = 12, LESS_THAN_OPERATOR = 13, NOT_EQUAL_OPERATOR = 14, 
    PLUS_OPERATOR = 15, MINUS_OPERATOR = 16, MULT_OPERATOR = 17, DIV_OPERATOR = 18, 
    MOD_OPERATOR = 19, LOGICAL_NOT_OPERATOR = 20, BITWISE_NOT_OPERATOR = 21, 
    SHIFT_LEFT_OPERATOR = 22, SHIFT_RIGHT_OPERATOR = 23, LOGICAL_AND_OPERATOR = 24, 
    BITWISE_AND_OPERATOR = 25, BITWISE_XOR_OPERATOR = 26, LOGICAL_OR_OPERATOR = 27, 
    BITWISE_OR_OPERATOR = 28, DOT_SYMBOL = 29, COMMA_SYMBOL = 30, SEMICOLON_SYMBOL = 31, 
    COLON_SYMBOL = 32, OPEN_PAR_SYMBOL = 33, CLOSE_PAR_SYMBOL = 34, OPEN_CURLY_SYMBOL = 35, 
    CLOSE_CURLY_SYMBOL = 36, UNDERLINE_SYMBOL = 37, JSON_SEPARATOR_SYMBOL = 38, 
    JSON_UNQUOTED_SEPARATOR_SYMBOL = 39, AT_SIGN_SYMBOL = 40, AT_TEXT_SUFFIX = 41, 
    AT_AT_SIGN_SYMBOL = 42, NULL2_SYMBOL = 43, PARAM_MARKER = 44, HEX_NUMBER = 45, 
    BIN_NUMBER = 46, DECIMAL_NUMBER = 47, FLOAT_NUMBER = 48, ACCESSIBLE_SYMBOL = 49, 
    ACCOUNT_SYMBOL = 50, ACTION_SYMBOL = 51, ADD_SYMBOL = 52, ADDDATE_SYMBOL = 53, 
    AFTER_SYMBOL = 54, AGAINST_SYMBOL = 55, AGGREGATE_SYMBOL = 56, ALGORITHM_SYMBOL = 57, 
    ALL_SYMBOL = 58, ALTER_SYMBOL = 59, ALWAYS_SYMBOL = 60, ANALYSE_SYMBOL = 61, 
    ANALYZE_SYMBOL = 62, AND_SYMBOL = 63, ANY_SYMBOL = 64, AS_SYMBOL = 65, 
    ASC_SYMBOL = 66, ASCII_SYMBOL = 67, ASENSITIVE_SYMBOL = 68, AT_SYMBOL = 69, 
    AUTHORS_SYMBOL = 70, AUTOEXTEND_SIZE_SYMBOL = 71, AUTO_INCREMENT_SYMBOL = 72, 
    AVG_ROW_LENGTH_SYMBOL = 73, AVG_SYMBOL = 74, BACKUP_SYMBOL = 75, BEFORE_SYMBOL = 76, 
    BEGIN_SYMBOL = 77, BETWEEN_SYMBOL = 78, BIGINT_SYMBOL = 79, BINARY_SYMBOL = 80, 
    BINLOG_SYMBOL = 81, BIN_NUM_SYMBOL = 82, BIT_AND_SYMBOL = 83, BIT_OR_SYMBOL = 84, 
    BIT_SYMBOL = 85, BIT_XOR_SYMBOL = 86, BLOB_SYMBOL = 87, BLOCK_SYMBOL = 88, 
    BOOLEAN_SYMBOL = 89, BOOL_SYMBOL = 90, BOTH_SYMBOL = 91, BTREE_SYMBOL = 92, 
    BY_SYMBOL = 93, BYTE_SYMBOL = 94, CACHE_SYMBOL = 95, CALL_SYMBOL = 96, 
    CASCADE_SYMBOL = 97, CASCADED_SYMBOL = 98, CASE_SYMBOL = 99, CAST_SYMBOL = 100, 
    CATALOG_NAME_SYMBOL = 101, CHAIN_SYMBOL = 102, CHANGE_SYMBOL = 103, 
    CHANGED_SYMBOL = 104, CHANNEL_SYMBOL = 105, CHARSET_SYMBOL = 106, CHAR_SYMBOL = 107, 
    CHECKSUM_SYMBOL = 108, CHECK_SYMBOL = 109, CIPHER_SYMBOL = 110, CLASS_ORIGIN_SYMBOL = 111, 
    CLIENT_SYMBOL = 112, CLOSE_SYMBOL = 113, COALESCE_SYMBOL = 114, CODE_SYMBOL = 115, 
    COLLATE_SYMBOL = 116, COLLATION_SYMBOL = 117, COLUMNS_SYMBOL = 118, 
    COLUMN_SYMBOL = 119, COLUMN_NAME_SYMBOL = 120, COLUMN_FORMAT_SYMBOL = 121, 
    COMMENT_SYMBOL = 122, COMMITTED_SYMBOL = 123, COMMIT_SYMBOL = 124, COMPACT_SYMBOL = 125, 
    COMPLETION_SYMBOL = 126, COMPRESSED_SYMBOL = 127, COMPRESSION_SYMBOL = 128, 
    CONCURRENT_SYMBOL = 129, CONDITION_SYMBOL = 130, CONNECTION_SYMBOL = 131, 
    CONSISTENT_SYMBOL = 132, CONSTRAINT_SYMBOL = 133, CONSTRAINT_CATALOG_SYMBOL = 134, 
    CONSTRAINT_NAME_SYMBOL = 135, CONSTRAINT_SCHEMA_SYMBOL = 136, CONTAINS_SYMBOL = 137, 
    CONTEXT_SYMBOL = 138, CONTINUE_SYMBOL = 139, CONTRIBUTORS_SYMBOL = 140, 
    CONVERT_SYMBOL = 141, COUNT_SYMBOL = 142, CPU_SYMBOL = 143, CREATE_SYMBOL = 144, 
    CROSS_SYMBOL = 145, CUBE_SYMBOL = 146, CURDATE_SYMBOL = 147, CURRENT_SYMBOL = 148, 
    CURRENT_DATE_SYMBOL = 149, CURRENT_TIME_SYMBOL = 150, CURRENT_USER_SYMBOL = 151, 
    CURSOR_SYMBOL = 152, CURSOR_NAME_SYMBOL = 153, CURTIME_SYMBOL = 154, 
    DATABASE_SYMBOL = 155, DATABASES_SYMBOL = 156, DATAFILE_SYMBOL = 157, 
    DATA_SYMBOL = 158, DATETIME_SYMBOL = 159, DATE_ADD_SYMBOL = 160, DATE_SUB_SYMBOL = 161, 
    DATE_SYMBOL = 162, DAY_HOUR_SYMBOL = 163, DAY_MICROSECOND_SYMBOL = 164, 
    DAY_MINUTE_SYMBOL = 165, DAY_SECOND_SYMBOL = 166, DAY_SYMBOL = 167, 
    DEALLOCATE_SYMBOL = 168, DECIMAL_NUM_SYMBOL = 169, DECIMAL_SYMBOL = 170, 
    DECLARE_SYMBOL = 171, DEFAULT_SYMBOL = 172, DEFAULT_AUTH_SYMBOL = 173, 
    DEFINER_SYMBOL = 174, DELAYED_SYMBOL = 175, DELAY_KEY_WRITE_SYMBOL = 176, 
    DELETE_SYMBOL = 177, DESC_SYMBOL = 178, DESCRIBE_SYMBOL = 179, DES_KEY_FILE_SYMBOL = 180, 
    DETERMINISTIC_SYMBOL = 181, DIAGNOSTICS_SYMBOL = 182, DIRECTORY_SYMBOL = 183, 
    DISABLE_SYMBOL = 184, DISCARD_SYMBOL = 185, DISK_SYMBOL = 186, DISTINCT_SYMBOL = 187, 
    DIV_SYMBOL = 188, DOUBLE_SYMBOL = 189, DO_SYMBOL = 190, DROP_SYMBOL = 191, 
    DUAL_SYMBOL = 192, DUMPFILE_SYMBOL = 193, DUPLICATE_SYMBOL = 194, DYNAMIC_SYMBOL = 195, 
    EACH_SYMBOL = 196, ELSE_SYMBOL = 197, ELSEIF_SYMBOL = 198, ENABLE_SYMBOL = 199, 
    ENCLOSED_SYMBOL = 200, ENCRYPTION_SYMBOL = 201, END_SYMBOL = 202, ENDS_SYMBOL = 203, 
    END_OF_INPUT_SYMBOL = 204, ENGINES_SYMBOL = 205, ENGINE_SYMBOL = 206, 
    ENUM_SYMBOL = 207, ERROR_SYMBOL = 208, ERRORS_SYMBOL = 209, ESCAPED_SYMBOL = 210, 
    ESCAPE_SYMBOL = 211, EVENTS_SYMBOL = 212, EVENT_SYMBOL = 213, EVERY_SYMBOL = 214, 
    EXCHANGE_SYMBOL = 215, EXECUTE_SYMBOL = 216, EXISTS_SYMBOL = 217, EXIT_SYMBOL = 218, 
    EXPANSION_SYMBOL = 219, EXPIRE_SYMBOL = 220, EXPLAIN_SYMBOL = 221, EXPORT_SYMBOL = 222, 
    EXTENDED_SYMBOL = 223, EXTENT_SIZE_SYMBOL = 224, EXTRACT_SYMBOL = 225, 
    FALSE_SYMBOL = 226, FAST_SYMBOL = 227, FAULTS_SYMBOL = 228, FETCH_SYMBOL = 229, 
    FILE_SYMBOL = 230, FILE_BLOCK_SIZE_SYMBOL = 231, FILTER_SYMBOL = 232, 
    FIRST_SYMBOL = 233, FIXED_SYMBOL = 234, FLOAT_SYMBOL = 235, FLUSH_SYMBOL = 236, 
    FOLLOWS_SYMBOL = 237, FORCE_SYMBOL = 238, FOREIGN_SYMBOL = 239, FOR_SYMBOL = 240, 
    FORMAT_SYMBOL = 241, FOUND_SYMBOL = 242, FROM_SYMBOL = 243, FULL_SYMBOL = 244, 
    FULLTEXT_SYMBOL = 245, FUNCTION_SYMBOL = 246, GET_SYMBOL = 247, GENERAL_SYMBOL = 248, 
    GENERATED_SYMBOL = 249, GROUP_REPLICATION_SYMBOL = 250, GEOMETRYCOLLECTION_SYMBOL = 251, 
    GEOMETRY_SYMBOL = 252, GET_FORMAT_SYMBOL = 253, GLOBAL_SYMBOL = 254, 
    GRANT_SYMBOL = 255, GRANTS_SYMBOL = 256, GROUP_SYMBOL = 257, GROUP_CONCAT_SYMBOL = 258, 
    HANDLER_SYMBOL = 259, HASH_SYMBOL = 260, HAVING_SYMBOL = 261, HELP_SYMBOL = 262, 
    HIGH_PRIORITY_SYMBOL = 263, HOST_SYMBOL = 264, HOSTS_SYMBOL = 265, HOUR_MICROSECOND_SYMBOL = 266, 
    HOUR_MINUTE_SYMBOL = 267, HOUR_SECOND_SYMBOL = 268, HOUR_SYMBOL = 269, 
    IDENTIFIED_SYMBOL = 270, IF_SYMBOL = 271, IGNORE_SYMBOL = 272, IGNORE_SERVER_IDS_SYMBOL = 273, 
    IMPORT_SYMBOL = 274, INDEXES_SYMBOL = 275, INDEX_SYMBOL = 276, INFILE_SYMBOL = 277, 
    INITIAL_SIZE_SYMBOL = 278, INNER_SYMBOL = 279, INOUT_SYMBOL = 280, INSENSITIVE_SYMBOL = 281, 
    INSERT_SYMBOL = 282, INSERT_METHOD_SYMBOL = 283, INSTANCE_SYMBOL = 284, 
    INSTALL_SYMBOL = 285, INTERVAL_SYMBOL = 286, INTO_SYMBOL = 287, INT_SYMBOL = 288, 
    INVOKER_SYMBOL = 289, IN_SYMBOL = 290, IO_AFTER_GTIDS_SYMBOL = 291, 
    IO_BEFORE_GTIDS_SYMBOL = 292, IO_SYMBOL = 293, IPC_SYMBOL = 294, IS_SYMBOL = 295, 
    ISOLATION_SYMBOL = 296, ISSUER_SYMBOL = 297, ITERATE_SYMBOL = 298, JOIN_SYMBOL = 299, 
    JSON_SYMBOL = 300, KEYS_SYMBOL = 301, KEY_BLOCK_SIZE_SYMBOL = 302, KEY_SYMBOL = 303, 
    KILL_SYMBOL = 304, LANGUAGE_SYMBOL = 305, LAST_SYMBOL = 306, LEADING_SYMBOL = 307, 
    LEAVES_SYMBOL = 308, LEAVE_SYMBOL = 309, LEFT_SYMBOL = 310, LESS_SYMBOL = 311, 
    LEVEL_SYMBOL = 312, LIKE_SYMBOL = 313, LIMIT_SYMBOL = 314, LINEAR_SYMBOL = 315, 
    LINES_SYMBOL = 316, LINESTRING_SYMBOL = 317, LIST_SYMBOL = 318, LOAD_SYMBOL = 319, 
    LOCAL_SYMBOL = 320, LOCATOR_SYMBOL = 321, LOCKS_SYMBOL = 322, LOCK_SYMBOL = 323, 
    LOGFILE_SYMBOL = 324, LOGS_SYMBOL = 325, LONGBLOB_SYMBOL = 326, LONGTEXT_SYMBOL = 327, 
    LONG_NUM_SYMBOL = 328, LONG_SYMBOL = 329, LOOP_SYMBOL = 330, LOW_PRIORITY_SYMBOL = 331, 
    MASTER_AUTO_POSITION_SYMBOL = 332, MASTER_BIND_SYMBOL = 333, MASTER_CONNECT_RETRY_SYMBOL = 334, 
    MASTER_DELAY_SYMBOL = 335, MASTER_HOST_SYMBOL = 336, MASTER_LOG_FILE_SYMBOL = 337, 
    MASTER_LOG_POS_SYMBOL = 338, MASTER_PASSWORD_SYMBOL = 339, MASTER_PORT_SYMBOL = 340, 
    MASTER_RETRY_COUNT_SYMBOL = 341, MASTER_SERVER_ID_SYMBOL = 342, MASTER_SSL_CAPATH_SYMBOL = 343, 
    MASTER_SSL_CA_SYMBOL = 344, MASTER_SSL_CERT_SYMBOL = 345, MASTER_SSL_CIPHER_SYMBOL = 346, 
    MASTER_SSL_CRL_SYMBOL = 347, MASTER_SSL_CRLPATH_SYMBOL = 348, MASTER_SSL_KEY_SYMBOL = 349, 
    MASTER_SSL_SYMBOL = 350, MASTER_SSL_VERIFY_SERVER_CERT_SYMBOL = 351, 
    MASTER_SYMBOL = 352, MASTER_TLS_VERSION_SYMBOL = 353, MASTER_USER_SYMBOL = 354, 
    MASTER_HEARTBEAT_PERIOD_SYMBOL = 355, MATCH_SYMBOL = 356, MAX_CONNECTIONS_PER_HOUR_SYMBOL = 357, 
    MAX_QUERIES_PER_HOUR_SYMBOL = 358, MAX_ROWS_SYMBOL = 359, MAX_SIZE_SYMBOL = 360, 
    MAX_STATEMENT_TIME_SYMBOL = 361, MAX_SYMBOL = 362, MAX_UPDATES_PER_HOUR_SYMBOL = 363, 
    MAX_USER_CONNECTIONS_SYMBOL = 364, MAXVALUE_SYMBOL = 365, MEDIUMBLOB_SYMBOL = 366, 
    MEDIUMINT_SYMBOL = 367, MEDIUMTEXT_SYMBOL = 368, MEDIUM_SYMBOL = 369, 
    MEMORY_SYMBOL = 370, MERGE_SYMBOL = 371, MESSAGE_TEXT_SYMBOL = 372, 
    MICROSECOND_SYMBOL = 373, MID_SYMBOL = 374, MIGRATE_SYMBOL = 375, MINUTE_MICROSECOND_SYMBOL = 376, 
    MINUTE_SECOND_SYMBOL = 377, MINUTE_SYMBOL = 378, MIN_ROWS_SYMBOL = 379, 
    MIN_SYMBOL = 380, MODE_SYMBOL = 381, MODIFIES_SYMBOL = 382, MODIFY_SYMBOL = 383, 
    MOD_SYMBOL = 384, MONTH_SYMBOL = 385, MULTILINESTRING_SYMBOL = 386, 
    MULTIPOINT_SYMBOL = 387, MULTIPOLYGON_SYMBOL = 388, MUTEX_SYMBOL = 389, 
    MYSQL_ERRNO_SYMBOL = 390, NAMES_SYMBOL = 391, NAME_SYMBOL = 392, NATIONAL_SYMBOL = 393, 
    NATURAL_SYMBOL = 394, NCHAR_STRING_SYMBOL = 395, NCHAR_SYMBOL = 396, 
    NDBCLUSTER_SYMBOL = 397, NEG_SYMBOL = 398, NEVER_SYMBOL = 399, NEW_SYMBOL = 400, 
    NEXT_SYMBOL = 401, NODEGROUP_SYMBOL = 402, NONE_SYMBOL = 403, NONBLOCKING_SYMBOL = 404, 
    NOT_SYMBOL = 405, NOW_SYMBOL = 406, NO_SYMBOL = 407, NO_WAIT_SYMBOL = 408, 
    NO_WRITE_TO_BINLOG_SYMBOL = 409, NULL_SYMBOL = 410, NUMBER_SYMBOL = 411, 
    NUMERIC_SYMBOL = 412, NVARCHAR_SYMBOL = 413, OFFLINE_SYMBOL = 414, OFFSET_SYMBOL = 415, 
    OLD_PASSWORD_SYMBOL = 416, ON_SYMBOL = 417, ONE_SYMBOL = 418, ONLINE_SYMBOL = 419, 
    ONLY_SYMBOL = 420, OPEN_SYMBOL = 421, OPTIMIZE_SYMBOL = 422, OPTIMIZER_COSTS_SYMBOL = 423, 
    OPTIONS_SYMBOL = 424, OPTION_SYMBOL = 425, OPTIONALLY_SYMBOL = 426, 
    ORDER_SYMBOL = 427, OR_SYMBOL = 428, OUTER_SYMBOL = 429, OUTFILE_SYMBOL = 430, 
    OUT_SYMBOL = 431, OWNER_SYMBOL = 432, PACK_KEYS_SYMBOL = 433, PAGE_SYMBOL = 434, 
    PARSER_SYMBOL = 435, PARTIAL_SYMBOL = 436, PARTITIONING_SYMBOL = 437, 
    PARTITIONS_SYMBOL = 438, PARTITION_SYMBOL = 439, PASSWORD_SYMBOL = 440, 
    PHASE_SYMBOL = 441, PLUGINS_SYMBOL = 442, PLUGIN_DIR_SYMBOL = 443, PLUGIN_SYMBOL = 444, 
    POINT_SYMBOL = 445, POLYGON_SYMBOL = 446, PORT_SYMBOL = 447, POSITION_SYMBOL = 448, 
    PRECEDES_SYMBOL = 449, PRECISION_SYMBOL = 450, PREPARE_SYMBOL = 451, 
    PRESERVE_SYMBOL = 452, PREV_SYMBOL = 453, PRIMARY_SYMBOL = 454, PRIVILEGES_SYMBOL = 455, 
    PROCEDURE_SYMBOL = 456, PROCESS_SYMBOL = 457, PROCESSLIST_SYMBOL = 458, 
    PROFILE_SYMBOL = 459, PROFILES_SYMBOL = 460, PROXY_SYMBOL = 461, PURGE_SYMBOL = 462, 
    QUARTER_SYMBOL = 463, QUERY_SYMBOL = 464, QUICK_SYMBOL = 465, RANGE_SYMBOL = 466, 
    READS_SYMBOL = 467, READ_ONLY_SYMBOL = 468, READ_SYMBOL = 469, READ_WRITE_SYMBOL = 470, 
    REAL_SYMBOL = 471, REBUILD_SYMBOL = 472, RECOVER_SYMBOL = 473, REDOFILE_SYMBOL = 474, 
    REDO_BUFFER_SIZE_SYMBOL = 475, REDUNDANT_SYMBOL = 476, REFERENCES_SYMBOL = 477, 
    REGEXP_SYMBOL = 478, RELAY_SYMBOL = 479, RELAYLOG_SYMBOL = 480, RELAY_LOG_FILE_SYMBOL = 481, 
    RELAY_LOG_POS_SYMBOL = 482, RELAY_THREAD_SYMBOL = 483, RELEASE_SYMBOL = 484, 
    RELOAD_SYMBOL = 485, REMOVE_SYMBOL = 486, RENAME_SYMBOL = 487, REORGANIZE_SYMBOL = 488, 
    REPAIR_SYMBOL = 489, REPEATABLE_SYMBOL = 490, REPEAT_SYMBOL = 491, REPLACE_SYMBOL = 492, 
    REPLICATION_SYMBOL = 493, REPLICATE_DO_DB_SYMBOL = 494, REPLICATE_IGNORE_DB_SYMBOL = 495, 
    REPLICATE_DO_TABLE_SYMBOL = 496, REPLICATE_IGNORE_TABLE_SYMBOL = 497, 
    REPLICATE_WILD_DO_TABLE_SYMBOL = 498, REPLICATE_WILD_IGNORE_TABLE_SYMBOL = 499, 
    REPLICATE_REWRITE_DB_SYMBOL = 500, REQUIRE_SYMBOL = 501, RESET_SYMBOL = 502, 
    RESIGNAL_SYMBOL = 503, RESTORE_SYMBOL = 504, RESTRICT_SYMBOL = 505, 
    RESUME_SYMBOL = 506, RETURNED_SQLSTATE_SYMBOL = 507, RETURNS_SYMBOL = 508, 
    RETURN_SYMBOL = 509, REVERSE_SYMBOL = 510, REVOKE_SYMBOL = 511, RIGHT_SYMBOL = 512, 
    ROLLBACK_SYMBOL = 513, ROLLUP_SYMBOL = 514, ROTATE_SYMBOL = 515, ROUTINE_SYMBOL = 516, 
    ROWS_SYMBOL = 517, ROW_COUNT_SYMBOL = 518, ROW_FORMAT_SYMBOL = 519, 
    ROW_SYMBOL = 520, RTREE_SYMBOL = 521, SAVEPOINT_SYMBOL = 522, SCHEDULE_SYMBOL = 523, 
    SCHEMA_NAME_SYMBOL = 524, SECOND_MICROSECOND_SYMBOL = 525, SECOND_SYMBOL = 526, 
    SECURITY_SYMBOL = 527, SELECT_SYMBOL = 528, SENSITIVE_SYMBOL = 529, 
    SEPARATOR_SYMBOL = 530, SERIALIZABLE_SYMBOL = 531, SERIAL_SYMBOL = 532, 
    SESSION_SYMBOL = 533, SERVER_SYMBOL = 534, SERVER_OPTIONS_SYMBOL = 535, 
    SESSION_USER_SYMBOL = 536, SET_SYMBOL = 537, SET_VAR_SYMBOL = 538, SHARE_SYMBOL = 539, 
    SHOW_SYMBOL = 540, SHUTDOWN_SYMBOL = 541, SIGNAL_SYMBOL = 542, SIGNED_SYMBOL = 543, 
    SIMPLE_SYMBOL = 544, SLAVE_SYMBOL = 545, SLOW_SYMBOL = 546, SMALLINT_SYMBOL = 547, 
    SNAPSHOT_SYMBOL = 548, SOCKET_SYMBOL = 549, SONAME_SYMBOL = 550, SOUNDS_SYMBOL = 551, 
    SOURCE_SYMBOL = 552, SPATIAL_SYMBOL = 553, SPECIFIC_SYMBOL = 554, SQLEXCEPTION_SYMBOL = 555, 
    SQLSTATE_SYMBOL = 556, SQLWARNING_SYMBOL = 557, SQL_AFTER_GTIDS_SYMBOL = 558, 
    SQL_AFTER_MTS_GAPS_SYMBOL = 559, SQL_BEFORE_GTIDS_SYMBOL = 560, SQL_BIG_RESULT_SYMBOL = 561, 
    SQL_BUFFER_RESULT_SYMBOL = 562, SQL_CACHE_SYMBOL = 563, SQL_CALC_FOUND_ROWS_SYMBOL = 564, 
    SQL_NO_CACHE_SYMBOL = 565, SQL_SMALL_RESULT_SYMBOL = 566, SQL_SYMBOL = 567, 
    SQL_THREAD_SYMBOL = 568, SSL_SYMBOL = 569, STACKED_SYMBOL = 570, STARTING_SYMBOL = 571, 
    STARTS_SYMBOL = 572, START_SYMBOL = 573, STATS_AUTO_RECALC_SYMBOL = 574, 
    STATS_PERSISTENT_SYMBOL = 575, STATS_SAMPLE_PAGES_SYMBOL = 576, STATUS_SYMBOL = 577, 
    STDDEV_SAMP_SYMBOL = 578, STDDEV_SYMBOL = 579, STDDEV_POP_SYMBOL = 580, 
    STD_SYMBOL = 581, STOP_SYMBOL = 582, STORAGE_SYMBOL = 583, STORED_SYMBOL = 584, 
    STRAIGHT_JOIN_SYMBOL = 585, STRING_SYMBOL = 586, SUBCLASS_ORIGIN_SYMBOL = 587, 
    SUBDATE_SYMBOL = 588, SUBJECT_SYMBOL = 589, SUBPARTITIONS_SYMBOL = 590, 
    SUBPARTITION_SYMBOL = 591, SUBSTR_SYMBOL = 592, SUBSTRING_SYMBOL = 593, 
    SUM_SYMBOL = 594, SUPER_SYMBOL = 595, SUSPEND_SYMBOL = 596, SWAPS_SYMBOL = 597, 
    SWITCHES_SYMBOL = 598, SYSDATE_SYMBOL = 599, SYSTEM_USER_SYMBOL = 600, 
    TABLES_SYMBOL = 601, TABLESPACE_SYMBOL = 602, TABLE_REF_PRIORITY_SYMBOL = 603, 
    TABLE_SYMBOL = 604, TABLE_CHECKSUM_SYMBOL = 605, TABLE_NAME_SYMBOL = 606, 
    TEMPORARY_SYMBOL = 607, TEMPTABLE_SYMBOL = 608, TERMINATED_SYMBOL = 609, 
    TEXT_SYMBOL = 610, THAN_SYMBOL = 611, THEN_SYMBOL = 612, TIMESTAMP_SYMBOL = 613, 
    TIMESTAMP_ADD_SYMBOL = 614, TIMESTAMP_DIFF_SYMBOL = 615, TIME_SYMBOL = 616, 
    TINYBLOB_SYMBOL = 617, TINYINT_SYMBOL = 618, TINYTEXT_SYMBOL = 619, 
    TO_SYMBOL = 620, TRAILING_SYMBOL = 621, TRANSACTION_SYMBOL = 622, TRIGGERS_SYMBOL = 623, 
    TRIGGER_SYMBOL = 624, TRIM_SYMBOL = 625, TRUE_SYMBOL = 626, TRUNCATE_SYMBOL = 627, 
    TYPES_SYMBOL = 628, TYPE_SYMBOL = 629, UDF_RETURNS_SYMBOL = 630, UNCOMMITTED_SYMBOL = 631, 
    UNDEFINED_SYMBOL = 632, UNDOFILE_SYMBOL = 633, UNDO_BUFFER_SIZE_SYMBOL = 634, 
    UNDO_SYMBOL = 635, UNICODE_SYMBOL = 636, UNINSTALL_SYMBOL = 637, UNION_SYMBOL = 638, 
    UNIQUE_SYMBOL = 639, UNKNOWN_SYMBOL = 640, UNLOCK_SYMBOL = 641, UNSIGNED_SYMBOL = 642, 
    UNTIL_SYMBOL = 643, UPDATE_SYMBOL = 644, UPGRADE_SYMBOL = 645, USAGE_SYMBOL = 646, 
    USER_RESOURCES_SYMBOL = 647, USER_SYMBOL = 648, USE_FRM_SYMBOL = 649, 
    USE_SYMBOL = 650, USING_SYMBOL = 651, UTC_DATE_SYMBOL = 652, UTC_TIMESTAMP_SYMBOL = 653, 
    UTC_TIME_SYMBOL = 654, VALIDATION_SYMBOL = 655, VALUES_SYMBOL = 656, 
    VALUE_SYMBOL = 657, VARBINARY_SYMBOL = 658, VARCHAR_SYMBOL = 659, VARIABLES_SYMBOL = 660, 
    VARIANCE_SYMBOL = 661, VARYING_SYMBOL = 662, VAR_POP_SYMBOL = 663, VAR_SAMP_SYMBOL = 664, 
    VIEW_SYMBOL = 665, VIRTUAL_SYMBOL = 666, WAIT_SYMBOL = 667, WARNINGS_SYMBOL = 668, 
    WEEK_SYMBOL = 669, WEIGHT_STRING_SYMBOL = 670, WHEN_SYMBOL = 671, WHERE_SYMBOL = 672, 
    WHILE_SYMBOL = 673, WITH_SYMBOL = 674, WITHOUT_SYMBOL = 675, WORK_SYMBOL = 676, 
    WRAPPER_SYMBOL = 677, WRITE_SYMBOL = 678, X509_SYMBOL = 679, XA_SYMBOL = 680, 
    XID_SYMBOL = 681, XML_SYMBOL = 682, XOR_SYMBOL = 683, YEAR_MONTH_SYMBOL = 684, 
    YEAR_SYMBOL = 685, ZEROFILL_SYMBOL = 686, PERSIST_SYMBOL = 687, ROLE_SYMBOL = 688, 
    ADMIN_SYMBOL = 689, INVISIBLE_SYMBOL = 690, VISIBLE_SYMBOL = 691, EXCEPT_SYMBOL = 692, 
    COMPONENT_SYMBOL = 693, RECURSIVE_SYMBOL = 694, JSON_OBJECTAGG_SYMBOL = 695, 
    JSON_ARRAYAGG_SYMBOL = 696, OF_SYMBOL = 697, SKIP_SYMBOL = 698, LOCKED_SYMBOL = 699, 
    NOWAIT_SYMBOL = 700, GROUPING_SYMBOL = 701, PERSIST_ONLY_SYMBOL = 702, 
    HISTOGRAM_SYMBOL = 703, BUCKETS_SYMBOL = 704, REMOTE_SYMBOL = 705, CLONE_SYMBOL = 706, 
    CUME_DIST_SYMBOL = 707, DENSE_RANK_SYMBOL = 708, EXCLUDE_SYMBOL = 709, 
    FIRST_VALUE_SYMBOL = 710, FOLLOWING_SYMBOL = 711, GROUPS_SYMBOL = 712, 
    LAG_SYMBOL = 713, LAST_VALUE_SYMBOL = 714, LEAD_SYMBOL = 715, NTH_VALUE_SYMBOL = 716, 
    NTILE_SYMBOL = 717, NULLS_SYMBOL = 718, OTHERS_SYMBOL = 719, OVER_SYMBOL = 720, 
    PERCENT_RANK_SYMBOL = 721, PRECEDING_SYMBOL = 722, RANK_SYMBOL = 723, 
    RESPECT_SYMBOL = 724, ROW_NUMBER_SYMBOL = 725, TIES_SYMBOL = 726, UNBOUNDED_SYMBOL = 727, 
    WINDOW_SYMBOL = 728, EMPTY_SYMBOL = 729, JSON_TABLE_SYMBOL = 730, NESTED_SYMBOL = 731, 
    ORDINALITY_SYMBOL = 732, PATH_SYMBOL = 733, HISTORY_SYMBOL = 734, REUSE_SYMBOL = 735, 
    SRID_SYMBOL = 736, THREAD_PRIORITY_SYMBOL = 737, RESOURCE_SYMBOL = 738, 
    SYSTEM_SYMBOL = 739, VCPU_SYMBOL = 740, MASTER_PUBLIC_KEY_PATH_SYMBOL = 741, 
    GET_MASTER_PUBLIC_KEY_SYMBOL = 742, RESTART_SYMBOL = 743, DEFINITION_SYMBOL = 744, 
    DESCRIPTION_SYMBOL = 745, ORGANIZATION_SYMBOL = 746, REFERENCE_SYMBOL = 747, 
    OPTIONAL_SYMBOL = 748, SECONDARY_SYMBOL = 749, SECONDARY_ENGINE_SYMBOL = 750, 
    SECONDARY_LOAD_SYMBOL = 751, SECONDARY_UNLOAD_SYMBOL = 752, ACTIVE_SYMBOL = 753, 
    INACTIVE_SYMBOL = 754, LATERAL_SYMBOL = 755, RETAIN_SYMBOL = 756, OLD_SYMBOL = 757, 
    NETWORK_NAMESPACE_SYMBOL = 758, ENFORCED_SYMBOL = 759, ARRAY_SYMBOL = 760, 
    OJ_SYMBOL = 761, MEMBER_SYMBOL = 762, RANDOM_SYMBOL = 763, MASTER_COMPRESSION_ALGORITHM_SYMBOL = 764, 
    MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOL = 765, PRIVILEGE_CHECKS_USER_SYMBOL = 766, 
    MASTER_TLS_CIPHERSUITES_SYMBOL = 767, WHITESPACE = 768, INVALID_INPUT = 769, 
    UNDERSCORE_CHARSET = 770, IDENTIFIER = 771, NCHAR_TEXT = 772, BACK_TICK_QUOTED_ID = 773, 
    DOUBLE_QUOTED_TEXT = 774, SINGLE_QUOTED_TEXT = 775, VERSION_COMMENT_START = 776, 
    MYSQL_COMMENT_START = 777, VERSION_COMMENT_END = 778, BLOCK_COMMENT = 779, 
    POUND_COMMENT = 780, DASHDASH_COMMENT = 781, NOT_EQUAL2_OPERATOR = 782
  };

  MySQLLexer(antlr4::CharStream *input);
  ~MySQLLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void LOGICAL_OR_OPERATORAction(antlr4::RuleContext *context, size_t actionIndex);
  void INT_NUMBERAction(antlr4::RuleContext *context, size_t actionIndex);
  void DOT_IDENTIFIERAction(antlr4::RuleContext *context, size_t actionIndex);
  void ADDDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_AND_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_OR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_XOR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CAST_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void COUNT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURRENT_DATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURRENT_TIME_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURTIME_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void DATE_ADD_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void DATE_SUB_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void EXTRACT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void GROUP_CONCAT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MAX_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MID_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MIN_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void NOT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void NOW_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void POSITION_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SESSION_USER_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_SAMP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_POP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STD_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBSTR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBSTRING_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUM_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SYSDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SYSTEM_USER_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void TRIM_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VARIANCE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VAR_POP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VAR_SAMP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void UNDERSCORE_CHARSETAction(antlr4::RuleContext *context, size_t actionIndex);
  void MYSQL_COMMENT_STARTAction(antlr4::RuleContext *context, size_t actionIndex);
  void VERSION_COMMENT_ENDAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool JSON_SEPARATOR_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_UNQUOTED_SEPARATOR_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ACCOUNT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ALWAYS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ANALYSE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool AUTHORS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CHANNEL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool COMPRESSION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CONTRIBUTORS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CURRENT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEFAULT_AUTH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DES_KEY_FILE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ENCRYPTION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXPIRE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXPORT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FILE_BLOCK_SIZE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FILTER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FOLLOWS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GET_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GENERATED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GROUP_REPLICATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INSTANCE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_AUTO_POSITION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_BIND_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_RETRY_COUNT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CRL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CRLPATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_TLS_VERSION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MAX_STATEMENT_TIME_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NEVER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NONBLOCKING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NUMBER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OLD_PASSWORD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ONLY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OPTIMIZER_COSTS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PLUGIN_DIR_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PRECEDES_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REDOFILE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_DO_DB_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_IGNORE_DB_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_DO_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_IGNORE_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_WILD_DO_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_WILD_IGNORE_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_REWRITE_DB_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ROTATE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SQL_AFTER_MTS_GAPS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SQL_CACHE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STACKED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STORED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TABLE_REF_PRIORITY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VALIDATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VIRTUAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool XID_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PERSIST_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ROLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ADMIN_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INVISIBLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VISIBLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXCEPT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool COMPONENT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RECURSIVE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_OBJECTAGG_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_ARRAYAGG_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OF_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SKIP_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LOCKED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NOWAIT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GROUPING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PERSIST_ONLY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool HISTOGRAM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BUCKETS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REMOTE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CLONE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CUME_DIST_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DENSE_RANK_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXCLUDE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FIRST_VALUE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FOLLOWING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GROUPS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LAG_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LAST_VALUE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LEAD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NTH_VALUE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NTILE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NULLS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OTHERS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OVER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PERCENT_RANK_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PRECEDING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RANK_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RESPECT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ROW_NUMBER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TIES_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool UNBOUNDED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool WINDOW_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EMPTY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NESTED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ORDINALITY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool HISTORY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REUSE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SRID_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool THREAD_PRIORITY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RESOURCE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SYSTEM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VCPU_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_PUBLIC_KEY_PATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GET_MASTER_PUBLIC_KEY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RESTART_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEFINITION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DESCRIPTION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ORGANIZATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REFERENCE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OPTIONAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_ENGINE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_LOAD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_UNLOAD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ACTIVE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INACTIVE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LATERAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RETAIN_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OLD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NETWORK_NAMESPACE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ENFORCED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ARRAY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OJ_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MEMBER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RANDOM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_COMPRESSION_ALGORITHM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_ZSTD_COMPRESSION_LEVEL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PRIVILEGE_CHECKS_USER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_TLS_CIPHERSUITES_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BACK_TICK_QUOTED_IDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DOUBLE_QUOTED_TEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SINGLE_QUOTED_TEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERSION_COMMENT_STARTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERSION_COMMENT_ENDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace parsers
