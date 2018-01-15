////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// This file contains all the strings that should be localized.  If a string is
// *not* in this file, then either:
//   (a) it should not be localized, or
//   (b) you have found a bug - please report it
//
// Strings that should be localized:
//   - text output that the user sees
//
// Strings that should NOT be localized:
//   - .taskrc configuration variable names
//   - command names
//   - extension function names
//   - certain literals associated with parsing
//   - debug strings
//   - attribute names
//   - modifier names
//   - logical operators (and, or, xor)
//
// Rules:
//   - Localized strings should not in general  contain leading or trailing
//     white space, including \n, thus allowing the code to compose strings.
//   - Retain the tense of the original string.
//   - Retain the same degree of verbosity of the original string.
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// Translators:
//   1. Copy this file (eng-USA.h) to a new file with the target locale as the
//      file name.  Using German as an example, do this:
//
//        cp eng-USA.h deu-DEU.h
//
//   2. Modify all the strings below.
//        i.e. change "Unknown error." to "Unbekannter Fehler.".
//
//   3. Add your new translation to the task.git/src/i18n.h file, if necessary,
//      by inserting:
//
//        #elif PACKAGE_LANGUAGE == LANGUAGE_DEU_DEU
//        #include <deu-DEU.h>
//
//   4. Add your new language to task.git/CMakeLists.txt, making sure that
//      number is unique:
//
//        set (LANGUAGE_DEU_DEU 3)
//
//   5. Add your new language to task.git/cmake.h.in:
//
//        #define LANGUAGE_DEU_DEU ${LANGUAGE_DEU_DEU}
//
//   6. Build your localized Taskwarrior with these commands:
//
//      cd task.git
//      cmake -D LANGUAGE=3 .
//      make
//
//   7. Submit your translation to support@taskwarrior.org, where it will be
//      shared with others.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// Note that for English, the following two lines are not displayed.  For all
// other localizations, these lines will appear in the output of the 'version'
// and 'diagnostics' commands.
//
// DO NOT include a copyright in the translation.
//
#define STRING_LOCALIZATION_DESC     "Deutsche Übersetzung"
#define STRING_LOCALIZATION_AUTHOR   "Ins Deutsche übersetzt von Jens Erat."

// Parser
#define STRING_PARSER_ALIAS_NEST     "Maximale Alias-Schachteltiefe von {1} erreicht."
#define STRING_PARSER_OVERRIDE_RC    "Konfigurations außer Kraft gesetzt durch: rc.{1}:{2}"
#define STRING_PARSER_UNKNOWN_ATTMOD "Fehler: Nicht erkannter Attribut-Operator '{1}'."
#define STRING_PARSER_ALTERNATE_RC   "Verwende alternative .taskrc-Datei {1}"
#define STRING_PARSER_ALTERNATE_DATA "Verwende alternative data.location {1}"
#define STRING_PARSER_UNEXPECTED_ARG "The '{1}' command does not allow '{2}'."

// Color
#define STRING_COLOR_UNRECOGNIZED    "Farbe '{1}' nicht erkannt."

// columns/Col*
#define STRING_COLUMN_BAD_NAME       "Spaltenname '{1}' nicht erkannt."
#define STRING_COLUMN_BAD_FORMAT     "Spaltenformat '{1}.{2}' nicht erkannt"
#define STRING_COLUMN_LABEL_TASKS    "Aufgaben"
#define STRING_COLUMN_LABEL_DEP      "Abhängig von"
#define STRING_COLUMN_LABEL_DEP_S    "Abh."
#define STRING_COLUMN_LABEL_DESC     "Beschreibung"
#define STRING_COLUMN_LABEL_DUE      "Fällig"
#define STRING_COLUMN_LABEL_END      "Ende"
#define STRING_COLUMN_LABEL_ENTERED  "Erfasst"
#define STRING_COLUMN_LABEL_COUNT    "Anzahl"
#define STRING_COLUMN_LABEL_COMPLETE "Erledigt"
#define STRING_COLUMN_LABEL_MOD      "Geändert"
#define STRING_COLUMN_LABEL_ADDED    "Hinzugefügt"
#define STRING_COLUMN_LABEL_AGE      "Alter"
#define STRING_COLUMN_LABEL_ID       "ID"
#define STRING_COLUMN_LABEL_PROJECT  "Projekt"
#define STRING_COLUMN_LABEL_UNTIL    "Bis"
#define STRING_COLUMN_LABEL_WAIT     "Aufgeschoben"
#define STRING_COLUMN_LABEL_WAITING  "Aufgeschoben bis"
#define STRING_COLUMN_LABEL_RECUR    "Wiederh."
#define STRING_COLUMN_LABEL_RECUR_L  "Wiederholung"
#define STRING_COLUMN_LABEL_START    "Beginn"
#define STRING_COLUMN_LABEL_STARTED  "Begonnen"
#define STRING_COLUMN_LABEL_ACTIVE   "A"
#define STRING_COLUMN_LABEL_STATUS   "Status"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Offen"
#define STRING_COLUMN_LABEL_STAT_CO  "Erledigt"
#define STRING_COLUMN_LABEL_STAT_DE  "Gelöscht"
#define STRING_COLUMN_LABEL_STAT_WA  "Wartet"
#define STRING_COLUMN_LABEL_STAT_RE  "Wiederholend"
#define STRING_COLUMN_LABEL_STAT_P   "O"
#define STRING_COLUMN_LABEL_STAT_C   "E"
#define STRING_COLUMN_LABEL_STAT_D   "G"
#define STRING_COLUMN_LABEL_STAT_W   "A"
#define STRING_COLUMN_LABEL_STAT_R   "W"
#define STRING_COLUMN_LABEL_TAGS     "Schlagworte"
#define STRING_COLUMN_LABEL_TAG      "Schlagwort"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Dringlichkeit"
#define STRING_COLUMN_LABEL_NAME     "Name"
#define STRING_COLUMN_LABEL_VALUE    "Wert"
#define STRING_COLUMN_LABEL_PARENT   "Vorgänger-Aufgabe"
#define STRING_COLUMN_LABEL_DATE     "Datum"
#define STRING_COLUMN_LABEL_COLUMN   "Spalten"
#define STRING_COLUMN_LABEL_STYLES   "Unterstützte Formate"
#define STRING_COLUMN_LABEL_EXAMPLES "Beispiele"
#define STRING_COLUMN_LABEL_SCHED    "Geplant"
#define STRING_COLUMN_LABEL_UDA      "Name"
#define STRING_COLUMN_LABEL_TYPE     "Typ"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Beschreibung"
#define STRING_COLUMN_LABEL_DEFAULT  "Standard"
#define STRING_COLUMN_LABEL_VALUES   "Erlaubte Werte"
#define STRING_COLUMN_LABEL_UDACOUNT "Nutzungshäufigkeit"
#define STRING_COLUMN_LABEL_ORPHAN   "Verwaiste UDA"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "Haus @Hausarbeit next"
#define STRING_COLUMN_EXAMPLES_PROJ  "Haus.Garten"
#define STRING_COLUMN_EXAMPLES_PAR   "Haus"
#define STRING_COLUMN_EXAMPLES_IND   "  Haus.Garten"
#define STRING_COLUMN_EXAMPLES_DESC  "Bekleidung einen Haken tiefer hängen"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Direkt vor dem Mittagessen"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Wenn Du heute Nachmittag in der Partie mitspielst"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Bevor Du den Brief nach Hause schreibst"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Wenn Dein Haar nicht geschnitten wird"

// commands/Cmd*
// USAGE strings are visible in 'task help'
#define STRING_CMD_CONFLICT          "Benutzerdefinierter Report '{1}' steht mit eingebautem task-Befehl in Konflikt."
#define STRING_CMD_VERSION_USAGE     "Zeigt die taskwarrior-Versionsnummer"
#define STRING_CMD_VERSION_USAGE2    "Zeigt ausschließlich die taskwarrior-Versionsnummer"
#define STRING_CMD_VERSION_MIT       "Taskwarrior darf unter den Bedingungen der MIT-Lizenz vervielfältigt werden, welche sich im Quellpaket befindet."
#define STRING_CMD_VERSION_DOCS      "Dokumentation für taskwarrior finden Sie in 'man task', 'man taskrc', 'man task-color', 'man task-sync' oder auf http://taskwarrior.org"
#define STRING_CMD_VERSION_BUILT     "{1} {2}, gebaut für "
#define STRING_CMD_VERSION_UNKNOWN   "unbekannt"
#define STRING_CMD_VERSION_COPY      "Copyright (C) 2006 - 2018 P. Beckingham, F. Hernandez."
#define STRING_CMD_LOGO_USAGE        "Zeigt das taskwarrior-Logo"
#define STRING_CMD_LOGO_COLOR_REQ    "Der Logo-Befehle benötigt aktivierte Farbunterstützung"
#define STRING_CMD_EXEC_USAGE        "Führt externe Befehle und Skripte aus"
#define STRING_CMD_URGENCY_USAGE     "Zeigt die Dringlichkeit einer Aufgabe an"
#define STRING_CMD_URGENCY_RESULT    "Aufgabe {1}, Dringlichkeit {2}"
#define STRING_CMD_ADD_USAGE         "Fügt eine neue Aufgabe hinzu"
#define STRING_CMD_ADD_FEEDBACK      "Aufgabe {1} hinzugefügt."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Protokolliert eine Aufgabe"
#define STRING_CMD_LOG_NO_RECUR      "Wiederholende Aufgaben können nicht protokolliert werden."
#define STRING_CMD_LOG_NO_WAITING    "Aufgeschobene Aufgaben können nicht protokolliert werden."

//#define STRING_CMD_LOG_LOGGED        "Aufgabe protokolliert."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Zeigt die IDs passender Aufgaben als Folge"
#define STRING_CMD_IDS_USAGE_LIST    "Zeigt die IDs passender Aufgaben als Liste"
#define STRING_CMD_IDS_USAGE_ZSH     "Zeigt die IDs und Beschreibungen passender Aufgaben"
#define STRING_CMD_UDAS_USAGE        "Zeigt alle festgelegten Eigenschaften von UDAs"
#define STRING_CMD_UDAS_COMPL_USAGE  "Zeigt festgelegte UDAs zur Autovervollständigung"
#define STRING_CMD_UUIDS_USAGE_RANGE "Zeigt die UUIDs passender Aufgaben als kommaseparierte Liste"
#define STRING_CMD_UUIDS_USAGE_LIST  "Zeigt die UUIDs passender Aufgaben als Liste"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Zeigt die UUIDs und Beschreibungen passender Aufgaben"
#define STRING_CMD_EXPORT_USAGE      "Exportiert Aufgaben im JSON-Format"
#define STRING_CMD_INFO_USAGE        "Zeigt alle Daten und Metadaten"
#define STRING_CMD_INFO_BLOCKED      "Aufgabe blockiert durch"
#define STRING_CMD_INFO_BLOCKING     "Aufgabe blockiert"
#define STRING_CMD_INFO_UNTIL        "Bis"
#define STRING_CMD_INFO_MODIFICATION "Änderung"
#define STRING_CMD_INFO_MODIFIED     "Letzte Änderung"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Macht die letzte Änderung an einer Aufgabe Rückgängig"
#define STRING_CMD_STATS_USAGE       "Zeigt Statistiken zur Aufgaben-Datenbank"
#define STRING_CMD_STATS_CATEGORY    "Kategorie"
#define STRING_CMD_STATS_DATA        "Daten"
#define STRING_CMD_STATS_TOTAL       "Summe"
#define STRING_CMD_STATS_ANNOTATIONS "Annotationen"
#define STRING_CMD_STATS_UNIQUE_TAGS "Unterschiedliche Schlagwörter"
#define STRING_CMD_STATS_PROJECTS    "Projekte"
#define STRING_CMD_STATS_DATA_SIZE   "Datenmenge"
#define STRING_CMD_STATS_UNDO_TXNS   "Transaktionen rückgängig machen"
#define STRING_CMD_STATS_BACKLOG     "Zu synchronisierende Aufgaben"
#define STRING_CMD_STATS_TAGGED      "Verschlagwortete Aufgaben"
#define STRING_CMD_STATS_OLDEST      "Älteste Aufgabe"
#define STRING_CMD_STATS_NEWEST      "Neueste Aufgabe"
#define STRING_CMD_STATS_USED_FOR    "Task genutzt"
#define STRING_CMD_STATS_ADD_EVERY   "Aufgabe hinzugefügt alle"
#define STRING_CMD_STATS_COMP_EVERY  "Aufgabe erledigt alle"
#define STRING_CMD_STATS_DEL_EVERY   "Aufgabe gelöscht alle"
#define STRING_CMD_STATS_AVG_PEND    "Durchschnittliche Zeit im Offen-Status"
#define STRING_CMD_STATS_DESC_LEN    "Durchschnittliche Beschreibungslänge"
#define STRING_CMD_STATS_CHARS       "{1} Zeichen"
#define STRING_CMD_STATS_BLOCKED     "Blockierte Aufgaben"
#define STRING_CMD_STATS_BLOCKING    "Blockierende Aufgaben"
#define STRING_CMD_REPORTS_USAGE     "Zeigt alle unterstützten Reports"
#define STRING_CMD_REPORTS_REPORT    "Report"
#define STRING_CMD_REPORTS_DESC      "Beschreibung"
#define STRING_CMD_REPORTS_SUMMARY   "{1} Reports"
#define STRING_CMD_TAGS_USAGE        "Listet alle genutzten Schlagworte"
#define STRING_CMD_COMTAGS_USAGE     "Listet ausschließlich alle genutzten Schlagwörter zur Auto-Vervollständigung"
#define STRING_CMD_TAGS_SINGLE       "1 Schlagwort"
#define STRING_CMD_TAGS_PLURAL       "{1} Schlagworte"
#define STRING_CMD_TAGS_NO_TAGS      "Keine Schlagworte."
#define STRING_CMD_HISTORY_USAGE_D   "Zeigt die tägliche Aufgabenentwicklung"
#define STRING_CMD_HISTORY_USAGE_W   "Zeigt die wöchentliche Aufgabenentwicklung"
#define STRING_CMD_HISTORY_USAGE_M   "Zeigt die monatliche Aufgabenentwicklung"
#define STRING_CMD_HISTORY_YEAR      "Jahr"
#define STRING_CMD_HISTORY_MONTH     "Monat"
#define STRING_CMD_HISTORY_DAY       "Tag"
#define STRING_CMD_HISTORY_ADDED     "Hinzugefügt"
#define STRING_CMD_HISTORY_COMP      "Erledigt"
#define STRING_CMD_HISTORY_DEL       "Gelöscht"
#define STRING_CMD_HISTORY_NET       "Änderung"
#define STRING_CMD_HISTORY_USAGE_A   "Zeigt die jährliche Aufgabenentwicklung"
#define STRING_CMD_HISTORY_AVERAGE   "Durchschnitt"
#define STRING_CMD_HISTORY_LEGEND    "Legende: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legende: + hinzugefügt, X erledigt, - gelöscht"
#define STRING_CMD_GHISTORY_USAGE_D  "Zeigt die tägliche Aufgabenentwicklung grafisch"
#define STRING_CMD_GHISTORY_USAGE_W  "Zeigt die wöchentliche Aufgabenentwicklung grafisch"
#define STRING_CMD_GHISTORY_USAGE_M  "Zeigt die monatliche Aufgabenentwicklung grafisch"
#define STRING_CMD_GHISTORY_USAGE_A  "Zeigt die jährliche Aufgabenentwicklung grafisch"
#define STRING_CMD_GHISTORY_YEAR     "Jahr"
#define STRING_CMD_GHISTORY_MONTH    "Monat"
#define STRING_CMD_GHISTORY_MONTH    "Tag"
#define STRING_CMD_GHISTORY_NUMBER   "Anzahl Hinzugefügt/Erledigt/Gelöscht"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_DONE_USAGE        "Kennzeichnet die gewählte Aufgabe als erledigt"
#define STRING_CMD_DONE_CONFIRM      "Aufgabe {1} '{2}' als erledigt kennzeichnen?"
#define STRING_CMD_DONE_TASK         "Aufgabe {1} '{2}' erledigt."
#define STRING_CMD_DONE_NO           "Aufgabe nicht erledigt."
#define STRING_CMD_DONE_NOTPEND      "Aufgabe {1} '{2}' ist weder offen noch aufgeschoben."
#define STRING_CMD_DONE_1            "{1} Aufgabe erledigt."
#define STRING_CMD_DONE_N            "{1} Aufgaben erledigt."

#define STRING_CMD_PROJECTS_USAGE    "Zeigt alle genutzten Projektnamen"
#define STRING_CMD_PROJECTS_USAGE_2  "Zeigt ausschließlich alle genutzten Projektnamen"
#define STRING_CMD_PROJECTS_NO       "Keine Projekte."
#define STRING_CMD_PROJECTS_NONE     "(keine)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} Projekt"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} Projekte"
#define STRING_CMD_PROJECTS_TASK     "({1} Aufgabe)"
#define STRING_CMD_PROJECTS_TASKS    "({1} Aufgaben)"
#define STRING_CMD_SUMMARY_USAGE     "Zeigt einen Aufgabenstatusbericht nach Projekten"
#define STRING_CMD_SUMMARY_PROJECT   "Projekt"
#define STRING_CMD_SUMMARY_REMAINING "Verbleibend"
#define STRING_CMD_SUMMARY_AVG_AGE   "Durchschnittliches Alter"
#define STRING_CMD_SUMMARY_COMPLETE  "erledigt"
#define STRING_CMD_SUMMARY_NONE      "(keine)"
#define STRING_CMD_COUNT_USAGE       "Zählt gewählte Aufgaben"
#define STRING_CMD_GET_USAGE         "DOM-Accessor"
#define STRING_CMD_GET_NO_DOM        "Keine DOM-Referenz spezifiziert."
#define STRING_CMD_GET_BAD_REF       "'{1}' is not a DOM reference."

#define STRING_CMD_UDAS_NO           "Keine UDAs festgelegt."
#define STRING_CMD_UDAS_SUMMARY      "{1} UDA festgelegt"
#define STRING_CMD_UDAS_SUMMARY2     "{1} UDAs festgelegt"
#define STRING_CMD_UDAS_ORPHAN       "{1} verwaister UDA"
#define STRING_CMD_UDAS_ORPHANS      "{1} verwaiste UDAs"

#define STRING_CMD_DELETE_USAGE      "Löscht die gewählte Aufgabe"
#define STRING_CMD_DELETE_CONFIRM    "Aufgabe {1} '{2}' dauerhaft löschen?"
#define STRING_CMD_DELETE_TASK       "Lösche Aufgabe {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "Lösche wiederholende Aufgabe {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "Dies ist eine wiederholende Aufgabe.  Möchten Sie alle offenen Wiederholungen dieser Aufgabe löschen?"
#define STRING_CMD_DELETE_NO         "Aufgabe nicht gelöscht."
#define STRING_CMD_DELETE_NOT_DEL    "Aufgabe {1} '{2}' kann nicht gelöscht werden."
#define STRING_CMD_DELETE_1          "{1} Aufgabe gelöscht."
#define STRING_CMD_DELETE_N          "{1} Aufgaben gelöscht."

#define STRING_CMD_DUPLICATE_USAGE   "Dupliziere die gewählte Aufgabe"
#define STRING_CMD_DUPLICATE_REC     "Hinweis: Aufgabe {1} ist Vorgänger für wiederholende Aufgaben.  Die duplizierte Aufgabe ist dies auch."
#define STRING_CMD_DUPLICATE_NON_REC "Hinweis: Aufgabe {1} ist eine wiederholende Aufgabe.  Die duplizierte Aufgabe ist dies nicht."
#define STRING_CMD_DUPLICATE_CONFIRM "Aufgabe {1} '{2}' duplizieren?"
#define STRING_CMD_DUPLICATE_TASK    "Aufgabe {1} '{2}' dupliziert."
#define STRING_CMD_DUPLICATE_NO      "Aufgabe nicht verdoppelt."
#define STRING_CMD_DUPLICATE_1       "{1} Aufgabe verdoppelt."
#define STRING_CMD_DUPLICATE_N       "{1} Aufgaben verdoppelt."

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_START_USAGE       "Kennzeichnet die gewählte Aufgabe als begonnen."
#define STRING_CMD_START_NO          "Aufgabe nicht begonnen."
#define STRING_CMD_START_ALREADY     "Aufgabe {1} '{2}' ist bereits gestartet."
#define STRING_CMD_START_TASK        "Starte Aufgabe {1} '{2}'."
#define STRING_CMD_START_CONFIRM     "Aufgabe {1} '{2}' starten?"
#define STRING_CMD_START_1           "{1} Aufgabe gestartet."
#define STRING_CMD_START_N           "{1} Aufgaben gestartet."

#define STRING_CMD_STOP_USAGE        "Entfernt die 'start'-Zeit einer Aufgabe"
#define STRING_CMD_STOP_NO           "Aufgabe nicht beendet."
#define STRING_CMD_STOP_ALREADY      "Aufgabe {1} '{2}' nicht beendet."
#define STRING_CMD_STOP_TASK         "Beende Aufgabe {1} '{2}'."
#define STRING_CMD_STOP_CONFIRM      "Aufgabe {1} '{2}' beenden?"
#define STRING_CMD_STOP_1            "{1} Aufgabe beendet."
#define STRING_CMD_STOP_N            "{1} Aufgaben beendet."

#define STRING_CMD_APPEND_USAGE      "Fügt einer Aufgabenbeschreibung Text hinzu"
#define STRING_CMD_APPEND_1          "Zu {1} Aufgabe hinzugefügt."
#define STRING_CMD_APPEND_N          "Zu {1} Aufgaben hinzugefügt."
#define STRING_CMD_APPEND_TASK       "Füge zur Aufgabe {1} '{2}' hinzu."
#define STRING_CMD_APPEND_TASK_R     "Füge zur wiederholenden Aufgabe {1} '{2}' hinzu."
#define STRING_CMD_APPEND_CONFIRM_R  "Dies ist eine wiederholende Aufgabe.  Möchten Sie zu allen offenen Wiederholungen dieser Aufgabe hinzufügen?"
#define STRING_CMD_APPEND_CONFIRM    "Zu Aufgabe {1} '{2}' hinzufügen?"
#define STRING_CMD_APPEND_NO         "Nicht zu Aufgabe hinzugefügt."

#define STRING_CMD_PREPEND_USAGE     "Stellt einer Aufgabenbeschreibung Text voran"
#define STRING_CMD_PREPEND_1         "Vor {1} Aufgabe vorangestellt."
#define STRING_CMD_PREPEND_N         "Vor {1} Aufgaben vorangestellt."
#define STRING_CMD_PREPEND_TASK      "Stelle Aufgabe {1} '{2}' voran."
#define STRING_CMD_PREPEND_TASK_R    "Stelle wiederholender Aufgabe {1} '{2}' voran."
#define STRING_CMD_PREPEND_CONFIRM_R "Dies ist eine wiederholende Aufgabe.  Möchten Sie vor allen offenen Wiederholungen dieser Aufgabe anfügen?"
#define STRING_CMD_PREPEND_CONFIRM   "Vor Aufgabe {1} '{2}' anfügen?"
#define STRING_CMD_PREPEND_NO        "Nicht vor Aufgabe angefügt."

#define STRING_CMD_ANNO_USAGE        "Kommentiert eine bestehene Aufgabe"
#define STRING_CMD_ANNO_CONFIRM      "Aufgabe {1} '{2}' kommentieren?"
#define STRING_CMD_ANNO_TASK         "Kommentiere Aufgabe {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "Kommentiere wiederholende Aufgabe {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "Dies ist eine wiederholende Aufgabe.  Möchten Sie alle offenen Wiederholungen dieser Aufgabe kommentieren?"
#define STRING_CMD_ANNO_NO           "Aufgabe nicht kommentiert."
#define STRING_CMD_ANNO_1            "{1} Aufgabe kommentiert."
#define STRING_CMD_ANNO_N            "{1} Aufgaben kommentiert."

#define STRING_CMD_COLUMNS_USAGE     "Alle unterstützten Spalten und Darstellungsoptionen"
#define STRING_CMD_COLUMNS_NOTE      "* kennzeichnet das Standardformat, und ist daher optional.  Zum Beispiel sind 'due' und 'due.formatted' gleichwertig."
#define STRING_CMD_COLUMNS_USAGE2    "Zeigt ausschließlich eine Liste der unterstützten Spalten"
#define STRING_CMD_COLUMNS_ARGS      "Es darf nur ein Suchwort angegeben werden."

#define STRING_CMD_DENO_USAGE        "Löscht einen Kommentar"
#define STRING_CMD_DENO_NONE         "Die gewählte Aufgabe hat keine Kommentare, welche gelöscht werden können."
#define STRING_CMD_DENO_CONFIRM      "Kommentar in Aufgabe {1} '{2}' löschen?"
#define STRING_CMD_DENO_FOUND        "Kommentar '{1}' gefunden und gelöscht."
#define STRING_CMD_DENO_NOMATCH      "Keine passenden Kommentare zu '{1}' gefunden und gelöscht."
#define STRING_CMD_DENO_NO           "Keine Kommentare gelöscht."
#define STRING_CMD_DENO_1            "Kommentar zu {1} Aufgabe gelöscht."
#define STRING_CMD_DENO_N            "Kommentare zu {1} Aufgaben gelöscht."

#define STRING_CMD_IMPORT_USAGE      "Importiert eine JSON-Datei"
#define STRING_CMD_IMPORT_SUMMARY    "{1} Aufgabe importiert."
#define STRING_CMD_IMPORT_FILE       "Importiere '{1}'"
#define STRING_CMD_IMPORT_MISSING    "Datei '{1}' nicht gefunden."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Kommentar fehlt Beschreibung: {1}"
#define STRING_TASK_NO_ENTRY         "Kommentar fehlt Erfassungsdatum: {1}"
#define STRING_CMD_SYNC_USAGE        "Gleicht Daten mit dem Task-Server ab"
#define STRING_CMD_SYNC_NO_SERVER    "Task-Server nicht konfiguriert."
#define STRING_CMD_SYNC_BAD_CRED     "Task-Server-Zugangsdaten in falschem Format."
#define STRING_CMD_SYNC_BAD_CERT     "Task-Server-Zertifikat fehlt."
#define STRING_CMD_SYNC_BAD_KEY      "Task-Server-Schlüssel fehlt."
#define STRING_CMD_SYNC_ADD          "hinzugefügt {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "  verändert {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "Datenabgleich mit {1}"
#define STRING_CMD_SYNC_SUCCESS0     "Datenabgleich erfolgreich."
#define STRING_CMD_SYNC_SUCCESS1     "Datenabgleich erfolgreich.  {1} Änderung(en) gesendet."
#define STRING_CMD_SYNC_SUCCESS2     "Datenabgleich erfolgreich.  {1} Änderung(en) empfangen."
#define STRING_CMD_SYNC_SUCCESS3     "Datenabgleich erfolgreich.  {1} Änderung(en) gesendet, {2} Änderung(en) empfangen."
#define STRING_CMD_SYNC_SUCCESS_NOP  "Datenabgleich erfolgreich.  Keine Änderungen."
#define STRING_CMD_SYNC_FAIL_ACCOUNT "Datenabgleich fehlgeschlagen.  Zugangsdaten falsch oder Konto auf Task-Server nicht aktiviert."
#define STRING_CMD_SYNC_FAIL_ERROR   "Datenabgleich fehlgeschlagen.  Der Task-Server hat einen Fehler zurückgeliefert: {1} {2}"
#define STRING_CMD_SYNC_FAIL_CONNECT "Datenabgleich fehlgeschlagen.  Konnte nicht mit dem Task-Server verbinden."
#define STRING_CMD_SYNC_BAD_SERVER   "Datenabgleich fehlgeschlagen.  Fehlerhafte Konfiguration '{1}'"
#define STRING_CMD_SYNC_NO_TLS       "Taskwarrior wurde ohne GnuTLS-Unterstützung gebaut.  Datenabgleich ist nicht verfügbar."
#define STRING_CMD_SYNC_INIT         "Alle offenen Aufgaben an den Task-Server senden?"
#define STRING_CMD_SYNC_NO_INIT      "Taskwarrior wird nicht mit dem erstmaligen Datenabgleich fortfahren."
#define STRING_CMD_SYNC_RELOCATE0    "Das Server-Konto wurde verschoben.  Bitte Konfiguration folgendermaßen ändern:"
#define STRING_CMD_SYNC_RELOCATE1    "task config taskd.server {1}"
#define STRING_CMD_SYNC_BAD_CA       "CA-Zertifikat nicht gefunden."
#define STRING_CMD_SYNC_TRUST_CA     "Entweder ein CA-Zertifikat bereitstellen oder Prüfung deaktivieren, nicht jedoch beides."
#define STRING_CMD_SYNC_TRUST_OBS    "Erlaubte Werte der 'taskd.trust'-Option sind nur noch 'strict', 'ignore hostname' und 'allow all'."

// STRING_CMD_DIAG_* strings all appear on the 'diag' command output.
#define STRING_CMD_DIAG_USAGE        "Platform, build and environment details"
#define STRING_CMD_DIAG_PLATFORM     "Platform"
#define STRING_CMD_DIAG_COMPILER     "Compiler"
#define STRING_CMD_DIAG_VERSION      "Version"
#define STRING_CMD_DIAG_CAPS         "Caps"
#define STRING_CMD_DIAG_COMPLIANCE   "Compliance"
#define STRING_CMD_DIAG_FEATURES     "Build Features"
#define STRING_CMD_DIAG_BUILT        "Built"
#define STRING_CMD_DIAG_COMMIT       "Commit"
#define STRING_CMD_DIAG_FOUND        "(found)"
#define STRING_CMD_DIAG_MISSING      "(missing)"
#define STRING_CMD_DIAG_MISS_DEP     "Task {1} depends on nonexistent task: {2}"
#define STRING_CMD_DIAG_MISS_PAR     "Task {1} has nonexistent recurrence template {2}"
#define STRING_CMD_DIAG_ENABLED      "Enabled"
#define STRING_CMD_DIAG_DISABLED     "Disabled"
#define STRING_CMD_DIAG_CONFIG       "Configuration"
#define STRING_CMD_DIAG_TESTS        "Tests"
#define STRING_CMD_DIAG_UUID_SCAN    "Scanned {1} tasks for duplicate UUIDs:"
#define STRING_CMD_DIAG_REF_SCAN     "Scanned {1} tasks for broken references:"
#define STRING_CMD_DIAG_REF_OK       "No broken references found"
#define STRING_CMD_DIAG_UUID_DUP     "Found duplicate {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "No duplicates found"
#define STRING_CMD_DIAG_NONE         "-none-"
#define STRING_CMD_DIAG_HOOKS        "Hooks"
#define STRING_CMD_DIAG_HOOK_NAME    "unrecognized hook name"
#define STRING_CMD_DIAG_HOOK_SYMLINK "symlink"
#define STRING_CMD_DIAG_HOOK_EXEC    "executable"
#define STRING_CMD_DIAG_HOOK_NO_EXEC "not executable"
#define STRING_CMD_DIAG_HOOK_ENABLE  "Enabled"
#define STRING_CMD_DIAG_HOOK_DISABLE "Disabled"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Erzeugt eine Liste aller Befehle zur Auto-Vervollständigung"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Erzeugt eine Liste aller Befehle zur ZSH-Auto-Verfollständigung"
#define STRING_CMD_ZSHATTS_USAGE     "Erzeugt eine Liste Eigenschaften zur ZSH-Auto-Vervollständigung"
#define STRING_CMD_ALIASES_USAGE     "Erzeugt eine Liste aller Aliase zur Auto-Vervollständigung"

#define STRING_CMD_MODIFY_USAGE1     "Ändert eine bestehende Aufgabe mit den übergebenen Parametern"
#define STRING_CMD_MODIFY_NO_DUE     "Wiederholende Aufgaben können nicht ohne Fälligkeitsdatum angelegt werden."
#define STRING_CMD_MODIFY_REM_DUE    "Das Fälligkeitsdatum einer wiederholenden Aufgabe kann nicht gelöscht werden."
#define STRING_CMD_MODIFY_REC_ALWAYS "Die Periode einer wiederholenden Aufgabe kann nicht gelöscht werden."
#define STRING_CMD_MODIFY_TASK       "Ändere Aufgabe {1} '{2}'."
#define STRING_CMD_MODIFY_TASK_R     "Ändere wiederholende Aufgabe {1} '{2}'."
#define STRING_CMD_MODIFY_1          "{1} Aufgabe geändert."
#define STRING_CMD_MODIFY_N          "{1} Aufgaben geändert."
#define STRING_CMD_MODIFY_NO         "Aufgabe nicht geändert."
#define STRING_CMD_MODIFY_CONFIRM    "Aufgabe {1} '{2}' ändern?"
#define STRING_CMD_MODIFY_RECUR      "Dies ist eine wiederholende Aufgabe.  Möchten Sie alle offenen Wiederholungen dieser Aufgabe ändern?"
#define STRING_CMD_MODIFY_NEED_TEXT  "Weiterer Text muss angegeben werden."
#define STRING_CMD_MODIFY_INACTIVE   "Note: Modified task {1} is {2}.  You may wish to make this task pending with: task {3} modify status:pending"

#define STRING_CMD_COLOR_USAGE       "Alle Farben, ein Beispiel, oder eine Legende"
#define STRING_CMD_COLOR_HERE        "Diese Farben werden zur Zeit genutzt:"
#define STRING_CMD_COLOR_COLOR       "Farbe"
#define STRING_CMD_COLOR_DEFINITION  "Definition"
#define STRING_CMD_COLOR_EXPLANATION "Nutzen Sie diesen Befehl, um zu sehen, wie die Farben auf Ihrem Terminal dargestellt werden."
#define STRING_CMD_COLOR_16          "16 Farben (unterstützt underline, bold text, bright background):"
#define STRING_CMD_COLOR_256         "256 Farben (unterstützt underline):"
#define STRING_CMD_COLOR_YOURS       "Ihr Beispiel:"
#define STRING_CMD_COLOR_BASIC       "Basisfarben"
#define STRING_CMD_COLOR_EFFECTS     "Effekte"
#define STRING_CMD_COLOR_CUBE        "RGB-Farbwürfel "
#define STRING_CMD_COLOR_RAMP        "Grauskala"
#define STRING_CMD_COLOR_TRY         "Versuchen Sie '{1}' auszuführen."
#define STRING_CMD_COLOR_OFF         "Farben wurden in Ihrer .taskrc-Datei deaktiviert.  Um zie zu aktivieren, löschen Sie die Zeile 'color=off' oder ändern Sie 'off' zu 'on'."
#define STRING_CMD_CONFIG_USAGE      "task-Konfiguration verändern"
#define STRING_CMD_CONFIG_CONFIRM    "Wirklich die Option '{1}' von '{2}' zu '{3}' ändern?"
#define STRING_CMD_CONFIG_CONFIRM2   "Wirklich die Option '{1}' mit Wert '{2}' hinzufügen?"
#define STRING_CMD_CONFIG_CONFIRM3   "Wirklich die Option '{1}' entfernen?"
#define STRING_CMD_CONFIG_NO_ENTRY   "Kein Eintrag '{1}' gefunden."
#define STRING_CMD_CONFIG_FILE_MOD   "Konfigurationsdatei {1} verändert."
#define STRING_CMD_CONFIG_NO_CHANGE  "Keine Änderungen durchgeführt."
#define STRING_CMD_CONFIG_NO_NAME    "Geben Sie den Wert der zu ändernden Option an."
#define STRING_CMD_HCONFIG_USAGE     "Zeigt alle unterstützten Konfigurations-Optionen zur AUtovervollständigung"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "Die Anzahl von Spalten und Beschriftungen für Report '{1}' unterscheidet sich."
#define STRING_CMD_CUSTOM_SHOWN      "{1} gezeigt"
#define STRING_CMD_CUSTOM_COUNT      "1 Aufgabe"
#define STRING_CMD_CUSTOM_COUNTN     "{1} Aufgaben"
#define STRING_CMD_CUSTOM_TRUNCATED  "auf {1} Zeilen gekürzt"
#define STRING_CMD_TIMESHEET_USAGE   "Wöchentliche Zusammenfassung abgeschlossener und anfgefangener Aufgaben"
#define STRING_CMD_TIMESHEET_STARTED "Begonnen ({1} Aufgaben)"
#define STRING_CMD_TIMESHEET_DONE    "Abgeschlossen ({1} Aufgaben)"
#define STRING_CMD_BURN_USAGE_M      "Zeigt ein Burn-Down-Diagramm, per Monat"
#define STRING_CMD_BURN_USAGE_W      "Zeigt ein Burn-Down-Diagramm, per Woche"
#define STRING_CMD_BURN_USAGE_D      "Zeigt ein Burn-Down-Diagramm, per Tag"
#define STRING_CMD_BURN_TITLE        "Burn-Down"
#define STRING_CMD_BURN_TOO_SMALL    "Terminal-Fenster zu klein um Graph zu zeichnen"
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Tägliches"
#define STRING_CMD_BURN_WEEKLY       "Wöchentliches"
#define STRING_CMD_BURN_MONTHLY      "Monatliches"
#define STRING_CMD_BURN_STARTED      "Angef."          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Beendet"             // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Offen"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "Keine Konvergenz"
#define STRING_CMD_HELP_USAGE_LABEL  "Benutzung:"
#define STRING_CMD_HELP_USAGE_DESC   "Führt rc.default.command aus, sofern angegeben"
#define STRING_CMD_CAL_USAGE         "Zeigt einen Kalender mit hervorgehobenen fälligen Aufgaben"
#define STRING_CMD_CAL_BAD_MONTH     "Argument '{1}' ist kein zulässiger Monat."
#define STRING_CMD_CAL_BAD_ARG       "Konnte Argument '{1}' nicht erkennen."
#define STRING_CMD_CAL_LABEL_DATE    "Datum"
#define STRING_CMD_CAL_LABEL_HOL     "Feiertag"
#define STRING_CMD_CAL_SUN_MON       "Die 'weekstart'-Konfigurationsoption darf nur 'Sunday' oder 'Monday' lauten."
#define STRING_CMD_EDIT_USAGE        "Startet einen Editor, um eine Aufgabe direkt zu bearbeiten"
#define STRING_CMD_CALC_USAGE        "Rechner"

// Config
#define STRING_CONFIG_OVERNEST       "Konfigurationsdatei mehr als 10 Ebenen verschachtelt - das muss ein Fehler sein."
#define STRING_CONFIG_READ_INCLUDE   "Konnte eingebundene Datei '{1}' nicht lesen."
#define STRING_CONFIG_INCLUDE_PATH   "Nur Dateien mit absolutem Pfad können eingebunden werden, nicht '{1}'"
#define STRING_CONFIG_BAD_ENTRY      "Fehlerhafter Eintrag '{1}' in Konfigurationsdatei."
#define STRING_CONFIG_DEPRECATED_COL "Ihre .taskrc-Datei enthält Repots mit veralteten Spalten.  Bitte entfernen Sie entry_time, start_time oder end_time in:"
#define STRING_CONFIG_DEPRECATED_VAR "Ihre .taskrc-Datei enthält veraltete Optionen:"

// Date
#define STRING_DATE_INVALID_FORMAT   "'{1}' ist kein gültiges Datum im '{2}'-Format."
#define STRING_DATE_BAD_WEEKSTART    "Die 'weekstart'-Konfigurationsoption darf nur 'Sunday' oder 'Monday' lauten."

#define STRING_DATE_JANUARY          "Januar"
#define STRING_DATE_FEBRUARY         "Februar"
#define STRING_DATE_MARCH            "März"
#define STRING_DATE_APRIL            "April"
#define STRING_DATE_MAY              "Mai"
#define STRING_DATE_JUNE             "Juni"
#define STRING_DATE_JULY             "Juli"
#define STRING_DATE_AUGUST           "August"
#define STRING_DATE_SEPTEMBER        "September"
#define STRING_DATE_OCTOBER          "Oktober"
#define STRING_DATE_NOVEMBER         "November"
#define STRING_DATE_DECEMBER         "Dezember"

#define STRING_DATE_MONDAY           "Montag"
#define STRING_DATE_TUESDAY          "Dienstag"
#define STRING_DATE_WEDNESDAY        "Mittwoch"
#define STRING_DATE_THURSDAY         "Donnerstag"
#define STRING_DATE_FRIDAY           "Freitag"
#define STRING_DATE_SATURDAY         "Samstag"

// dependency
#define STRING_DEPEND_BLOCKED        "Aufgabe {1} wird blockiert durch:"
#define STRING_DEPEND_BLOCKING       "und blockiert:"
#define STRING_DEPEND_FIX_CHAIN      "Möchten Sie, dass diese Abhängigkeitskette korrigiert wird?"

// DOM
#define STRING_DOM_UNREC             "DOM: Unbekannten Namen nicht erkannt '{1}'."

// Eval
#define STRING_EVAL_NO_EXPRESSION    "Kein Ausdruck auszuwerten."
#define STRING_EVAL_UNSUPPORTED      "Nicht unterstützter Operator: '{1}'."
#define STRING_EVAL_OP_EXPECTED      "Operator erwartet."
#define STRING_EVAL_NO_EVAL          "Der Ausdruck konnte nicht ausgewertet werden."
#define STRING_EVAL_NOT_EXPRESSION   "The value is not an expression."
#define STRING_PAREN_MISMATCH        "Ungültige Klammerung in Ausdruck."

// edit
#define STRING_EDIT_NO_CHANGES       "Keine Änderungen entdeckt."
#define STRING_EDIT_FAILED           "Editing failed with exit code {1}."
#define STRING_EDIT_COMPLETE         "Bearbeitung abgeschlossen."
#define STRING_EDIT_IN_PROGRESS      "Task is already being edited."
#define STRING_EDIT_LAUNCHING        "Starte jetzt '{1}'..."
#define STRING_EDIT_CHANGES          "Änderungen entdeckt."
#define STRING_EDIT_UNPARSEABLE      "Taskwarrior konnte Ihre Änderungen nicht verarbeiten.  Möchten Sie es erneut probieren?"
#define STRING_EDIT_UNWRITABLE       "Ihr data.location-Order ist nicht beschreibbar."
#define STRING_EDIT_TAG_SEP          "Trennen Sie die Schlagworte mit Leerzeichen, zum Beispiel: tag1 tag2"
#define STRING_EDIT_DEP_SEP          "Abhängigkeiten sollten eine Komma-getrennte Liste von Aufgaben-IDs/UUIDs oder ID-Intervallen ohne Leerzeichen sein."
#define STRING_EDIT_UDA_SEP          "Benutzerdefinierte Eigenschaften"
#define STRING_EDIT_UDA_ORPHAN_SEP   "Verwaiste Benutzerdefinierte Eigenschaften"
#define STRING_EDIT_END              "Ende"

#define STRING_EDIT_PROJECT_MOD      "Projekt geändert."
#define STRING_EDIT_PROJECT_DEL      "Projekt gelöscht."
#define STRING_EDIT_DESC_MOD         "Beschreibung geändert."
#define STRING_EDIT_DESC_REMOVE_ERR  "Beschreibung kann nicht entfernt werden."
#define STRING_EDIT_ENTRY_REMOVE_ERR "Erstelldatum kann nicht entfernt werden."
#define STRING_EDIT_ENTRY_MOD        "Erstelldatum geändert."
#define STRING_EDIT_START_MOD        "Start-Datum geändert."
#define STRING_EDIT_START_DEL        "Start-Datum gelöscht."
#define STRING_EDIT_END_MOD          "End-Datum geändert."
#define STRING_EDIT_END_DEL          "End-Datum gelöscht."
#define STRING_EDIT_END_SET_ERR      "Kann kein Ende-Datum für eine offene Aufgabe setzen."
#define STRING_EDIT_SCHED_MOD        "Geplantes Datum geändert."
#define STRING_EDIT_SCHED_DEL        "Geplantes Datum gelöscht."
#define STRING_EDIT_DUE_MOD          "Fälligkeit geändert."
#define STRING_EDIT_DUE_DEL          "Fälligkeit gelöscht."
#define STRING_EDIT_DUE_DEL_ERR      "Fälligkeit einer wiederholenden Aufgabe kann nicht gelöscht werden."
#define STRING_EDIT_UNTIL_MOD        "Ende-Datum geändert."
#define STRING_EDIT_UNTIL_DEL        "Ende-Datum gelöscht."
#define STRING_EDIT_RECUR_MOD        "Wiederholungsperiode geändert."
#define STRING_EDIT_RECUR_DEL        "Wiederholungsperiode gelöscht."
#define STRING_EDIT_RECUR_DUE_ERR    "Wiederholende Aufgaben benötigen eine Fälligkeit."
#define STRING_EDIT_RECUR_ERR        "Keine gültige Wiederholungsperiode."
#define STRING_EDIT_WAIT_MOD         "Aufschiebe-Datum geändert."
#define STRING_EDIT_WAIT_DEL         "Aufschiebe-Datum gelöscht."
#define STRING_EDIT_PARENT_MOD       "Vorgänger-UUID geändert."
#define STRING_EDIT_PARENT_DEL       "Vorgänger-UUID gelöscht."
#define STRING_EDIT_UDA_MOD          "UDA {1} geändert."
#define STRING_EDIT_UDA_DEL          "UDA {1} gelöscht."

// These four blocks can be replaced, but the number of lines must not change.
#define STRING_EDIT_HEADER_1         "Der Befehl 'task <id> edit' ermöglicht es, alle Eigenschaften einer Aufgabe"
#define STRING_EDIT_HEADER_2         "mit einem Text-Editor zu bearbeiten. Bearbeiten Sie nach Ihren Wünschen."
#define STRING_EDIT_HEADER_3         "Nachdem Sie gespeichert und den Text Editor beendet haben, wird taskwarrior"
#define STRING_EDIT_HEADER_4         "die Datei einlesen und durchgeführte Änderungen anwenden.  Wenn Sie den"
#define STRING_EDIT_HEADER_5         "Text-Editor beenden, ohne zu speichern oder Änderungen durchzuführen, wird"
#define STRING_EDIT_HEADER_6         "taskwarrior nichts tun."

#define STRING_EDIT_HEADER_7         "Zeilen, welche mit # beginnen, beinhalten nicht änderbare Eigenschaften"
#define STRING_EDIT_HEADER_8         "(z.B. die ID).  Sollte taskwarrior Ihre Änderungen nicht verstehen, wird er"
#define STRING_EDIT_HEADER_9         "den Editor erneut öffnen, sodass Sie es erneut versuchen können."

#define STRING_EDIT_HEADER_10        "Sollten Sie sich in einer Endlosschleife befinden und immer die selbe Datei"
#define STRING_EDIT_HEADER_11        "bearbeiten, schließen Sie den Text-Editor ohne Änderungen vorzunehmen."
#define STRING_EDIT_HEADER_12        "Taskwarrior wird dies feststellen und die Bearbeitung beenden."

#define STRING_EDIT_HEADER_13        "Kommentare haben das Format '<date> -- <text>', es darf beliebig viele geben."
#define STRING_EDIT_HEADER_14        "Die ' -- '-Trennung zwischen Datum und Text darf nicht entfernt werden."
#define STRING_EDIT_HEADER_15        "Zum einfachen hinzufügen neuer Kommentare folgt ein leeres Kommentarfeld."

// Maintain the same spacing.
#define STRING_EDIT_TABLE_HEADER_1   "Name               Bearbeitbare Details"
#define STRING_EDIT_TABLE_HEADER_2   "-----------------  ----------------------------------------------------"

// Errors
// TODO Move each of these to appropriate section.
#define STRING_ERROR_PREFIX          "Fehler: "
#define STRING_TRIVIAL_INPUT         "Sie müssen einen Befehl oder eine Aufgabe zum ändern angeben."
#define STRING_INFINITE_LOOP         "Beende Ersetzung, weil mehr als {1} Änderungen durchgeführt wurden - Schutz vor Endlosschleifen."
#define STRING_UDA_TYPE              "UDAs müssen vom Typ 'string', 'date', 'duration' oder 'numeric' sein."
#define STRING_UDA_COLLISION         "Das UDA '{1}' hat den selben Namen wie eine eingebaute Eigenschaft, und ist daher nicht erlaubt."
#define STRING_INVALID_MOD           "Die '{1}'-Eigenschaft erlaubt keinen Wert '{2}'."
#define STRING_ERROR_DETAILS         "Die Option 'calendar.details.report' muss einen einzelnen Report-Namen enthalten."
#define STRING_ERROR_NO_FILTER       "Command line filters are not supported by this command."
#define STRING_ERROR_CONFIRM_SIGINT  "Interrupted: No changes made."
#define STRING_ERROR_BAD_STATUS      "The status '{1}' is not valid."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Keine Aufgaben."
#define STRING_FEEDBACK_NO_TASKS_SP  "Keine Aufgaben angegeben."
#define STRING_FEEDBACK_NO_MATCH     "Keine treffer."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 Aufgabe)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} Aufgaben)"
#define STRING_FEEDBACK_DELETED      "{1} wird gelöscht."
#define STRING_FEEDBACK_DEP_SET      "Abhängigkeit wird auf '{1}' gesetzt."
#define STRING_FEEDBACK_DEP_MOD      "Abhängigkeit wird von '{1}' zu '{2}' geändert."
#define STRING_FEEDBACK_DEP_DEL      "Abhängigkeit '{1}' wird gelöscht."
#define STRING_FEEDBACK_DEP_WAS_SET  "Abhängigkeit wurde auf '{1}' gesetzt."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dependencies wurde von '{1}' zu '{2}' geändert."
#define STRING_FEEDBACK_ATT_SET      "{1} wird auf '{2}' gesetzt."
#define STRING_FEEDBACK_ATT_MOD      "{1} wird von '{2}' zu '{3}' geändert."
#define STRING_FEEDBACK_ATT_DEL      "{1} wird gelöscht."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} wird gelöscht (Dauer: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} wurde auf '{2}' gesetzt."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} wurde von '{2}' zu '{3}' geändert."
#define STRING_FEEDBACK_ANN_ADD      "Kommentar von '{1}' hinzugefügt."
#define STRING_FEEDBACK_ANN_DEL      "Kommentar '{1}' gelöscht."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Kommentar zu '{1}' geändert."
#define STRING_FEEDBACK_NOP          "Keine Änderungen werden durchgeführt."
#define STRING_FEEDBACK_WAS_NOP      "Keine Änderungen wurden durchgeführt."
#define STRING_FEEDBACK_TAG_NOCOLOR  "Das besondere Schlagwort 'nocolor' deaktiviert Farb-Regeln für diese Aufgabe."
#define STRING_FEEDBACK_TAG_NONAG    "Das besondere Schlagwort 'nonag' verhindert Nachfragen, wenn diese Aufgabe geändert wird."
#define STRING_FEEDBACK_TAG_NOCAL    "Das besondere Schlagwort 'nocal' verhindert, dass diese Aufgabe im 'calendar'-Report erscheint."
#define STRING_FEEDBACK_TAG_NEXT     "Das besondere Schlagwort 'next' erhöht die Dringlichkeit dieser Aufgabe, sodass sie im 'next'-Report erscheint."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Aufgabe {1} '{2}' entsperrt."
#define STRING_FEEDBACK_EXPIRED      "Aufgabe {1} '{2}' ist abgelaufen und wurde gelöscht."
#define STRING_FEEDBACK_BACKLOG_N    "{1} Lokale Änderungen.  Datenabgleich erforderlich."
#define STRING_FEEDBACK_BACKLOG      "{1} Lokale Änderungen.  Datenabgleich erforderlich."

// helpers
#define STRING_HELPER_PROJECT_CHANGE "The project '{1}' has changed."
#define STRING_HELPER_PROJECT_COMPL  "Project '{1}' is {2}% complete"
#define STRING_HELPER_PROJECT_REM    "({1} of {2} tasks remaining)."
#define STRING_HELPER_PROJECT_REM1   "({1} task remaining)."

// Hooks
#define STRING_HOOK_ERROR_OBJECT     "Hook Error: JSON Object '{...}' expected from hook script: {1}"
#define STRING_HOOK_ERROR_NODESC     "Hook Error: JSON Object missing 'description' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_NOUUID     "Hook Error: JSON Object missing 'uuid' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_SYNTAX     "Hook Error: JSON syntax error in: {1}"
#define STRING_HOOK_ERROR_JSON       "Hook Error: JSON "
#define STRING_HOOK_ERROR_NOPARSE    "Hook Error: JSON failed to parse: "
#define STRING_HOOK_ERROR_BAD_NUM    "Hook Error: Expected {1} JSON task(s), found {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_SAME1      "Hook Error: JSON must be for the same task: {1}, in hook script: {2}"
#define STRING_HOOK_ERROR_SAME2      "Hook Error: JSON must be for the same task: {1} != {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_NOFEEDBACK "Hook Error: Expected feedback from failing hook script: {1}"

// Record
#define STRING_RECORD_EMPTY          "Leerer Datensatz in der Eingabe."
#define STRING_RECORD_JUNK_AT_EOL    "Unerkannte Zeichen am Ende der Eingabe."
#define STRING_RECORD_NOT_FF4        "Datensatz nicht als Format 4 erkannt."

// 'show' command
#define STRING_CMD_SHOW              "Zeigt alle Konfigurations-Optionen oder eine Teilmenge davon"
#define STRING_CMD_SHOW_ARGS         "Sie müssen 'all' oder ein Suchwort angeben."
#define STRING_CMD_SHOW_NONE         "Keine zutreffendern Konfigurations-Optionen."
#define STRING_CMD_SHOW_UNREC        "Die .taskrc-Datei enthält folgende nicht erkannte Optionen:"
#define STRING_CMD_SHOW_DIFFER       "Manche Ihrer .taskrc-Optionen unterscheiden sich von den Standardwerten."
#define STRING_CMD_SHOW_EMPTY        "Konfigurationsfehler: .taskrc enthält keine Werte."
#define STRING_CMD_SHOW_DIFFER_COLOR "Diese sind oben in {1} hervorgehoben."
#define STRING_CMD_SHOW_CONFIG_ERROR "Konfigurationsfehler: {1} enthält nicht erkannten Wert '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Konfigurationsfehler: data.location nicht in .taskrc-Datei angegeben."
#define STRING_CMD_SHOW_LOC_EXIST    "Konfigurationsfehler: data.location enthält einen fehlenden oder nicht lesbaren Ordner."
#define STRING_CMD_SHOW_CONF_VAR     "Konfigurations-Option"
#define STRING_CMD_SHOW_CONF_VALUE   "Wert"
#define STRING_CMD_SHOW_CONF_DEFAULT "Standardwert"
#define STRING_CMD_SHOWRAW           "Zeigt alle Konfigurations-Optionen in maschinenlesbarem Format"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior unterstützt Datei-Format 1 nicht mehr, welches ursprünglich zwischen dem 27. November 2006 und 31. Dezember 2007 eingesetzt wurde."
#define STRING_TASK_NO_FF2           "Taskwarrior unterstützt Datei-Format 2 nicht mehr, welches ursprünglich zwischen dem 1. Januar 2008 und 12. April 2009 eingesetzt wurde."
#define STRING_TASK_NO_FF3           "Taskwarrior unterstützt Datei-Format 3 nicht mehr, welches ursprünglich zwischen dem 23. März 2009 und 16. Mai 2009 eingesetzt wurde."
#define STRING_TASK_PARSE_UNREC_FF   "Nicht erkanntes taskwarrior-Dateiformat."
#define STRING_TASK_DEPEND_ITSELF    "Eine Aufgabe kann nicht von sich selbst abhängen."
#define STRING_TASK_DEPEND_MISS_CREA "Konnte keine Abhängigkeit von Aufgabe {1} erstellen - Aufgabe nicht gefunden."
#define STRING_TASK_DEPEND_MISS_DEL  "Konnte keine Abhängigkeit zu Aufgabe {1} löschen - nicht gefunden."
#define STRING_TASK_DEPEND_DUP       "Aufgabe {1} hängt bereits von Aufgabe {2} ab."
#define STRING_TASK_DEPEND_CIRCULAR  "Verbotene zyklische Abhängigkeit erkannt."
#define STRING_TASK_VALID_DESC       "Aufgaben müssen eine Beschreibung haben."
#define STRING_TASK_VALID_BLANK      "Leere Aufgaben können nicht angelegt werden."
#define STRING_TASK_VALID_BEFORE     "Warnung: Das '{1}'-Datum ist nach dem '{2}'-Datum."
#define STRING_TASK_VALID_REC_DUE    "Wiederholende Aufgaben müssen eine Fälligkeit besitzen."
#define STRING_TASK_VALID_RECUR      "Wiederhol-Periode '{1}' ist ungültig."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Befehl an Ausführung gehindert."
#define STRING_TASK_SAFETY_ALLOW     "Kein Filter angegeben, und durch den konfigurierten 'allow.empty.filter'-Wert wurde keine Aktion durchgeführt."
#define STRING_TASK_INVALID_DUR      "Zeitdauer '{1}' nicht unterstützt."
#define STRING_TASK_INVALID_COL_TYPE "Nicht erkannter Typ '{1}' für Spalte '{2}'"

// TDB2
#define STRING_TDB2_PARSE_ERROR      " in {1} in Zeile {2}"
#define STRING_TDB2_UUID_NOT_UNIQUE  "Kann Aufgabe nicht hinzufügen, weil UUID '{1}' nicht eindeutig ist."
#define STRING_TDB2_MISSING          "Fehlendes                     {1}  \"{2}\""
#define STRING_TDB2_NO_UNDO          "Keine rückgängig zu machenden Transaktionen."
#define STRING_TDB2_LAST_MOD         "Die letzte Änderung wurde {1} durchgeführt"
#define STRING_TDB2_UNDO_PRIOR       "Vorherige Werte"
#define STRING_TDB2_UNDO_CURRENT     "Aktuelle Werte"
#define STRING_TDB2_DIFF_PREV        "--- Vorheriger Zustand"             // Same length
#define STRING_TDB2_DIFF_PREV_DESC   "undo wird folgenden Zustand wiederherstellen" //   ||
#define STRING_TDB2_DIFF_CURR        "+++ Aktueller Zustand "             // Same length
#define STRING_TDB2_DIFF_CURR_DESC   "Change made {1}"
#define STRING_TDB2_UNDO_CONFIRM     "Der undo-Befehl ist nicht rückgängig zu machen.  Wollen Sie wirklich zum vorherigen Zustand zurückkehren?"
#define STRING_TDB2_MISSING_UUID     "Kann UUID der rückgängig zu machenden Aufgabe nicht finden."
#define STRING_TDB2_REVERTED         "Veränderte Aufgabe wiederhergestellt."
#define STRING_TDB2_REMOVED          "Aufgabe entfernt."
#define STRING_TDB2_UNDO_COMPLETE    "Rückgängig machen abgeschlossen."
#define STRING_TDB2_UNDO_SYNCED      "Kann Änderung nicht rückgängig machen, weil die Aufgabe bereits abgeglichen wurde.  Aufgabe stattdessen löschen."
#define STRING_TDB2_DIRTY_EXIT       "Beende mit ungeschriebenen Änderungen auf {1}"
#define STRING_TDB2_UNWAIT           "Un-waiting task '{1}'"

// recur.cpp
#define STRING_RECUR_CREATE          "Creating recurring task instance '{1}'"

// View
#define STRING_VIEW_TOO_SMALL        "Dieser Report hat eine Mindestbreite von {1} und passt nicht in die Bildschirmbreite von {2}."

// util
#define STRING_UTIL_CONFIRM_YES      "ja"
#define STRING_UTIL_CONFIRM_YES_U    "Ja"
#define STRING_UTIL_CONFIRM_NO       "nein"
#define STRING_UTIL_CONFIRM_ALL      "alle"
#define STRING_UTIL_CONFIRM_ALL_U    "Alle"
#define STRING_UTIL_CONFIRM_QUIT     "abbrechen"

// Legacy
#define STRING_LEGACY_PRIORITY       "Legacy attribute found.  Please change '{1}' to '{2}'."

#endif
