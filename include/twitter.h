#ifndef TWITTER_H
#define TWITTER_H

/**
 * @file twitter.h
 * Contains the functions to interact with twitter.
 * The base64 and nonce functions are taken from liboauth (http://liboauth.sourceforge.net/)
 */

#define MAXLIST  10
#define DEFNONCE 32
#define TWTLEN 2560
#define TWTURL "https://api.twitter.com/1.1/statuses/update.json"

/** Send tweets to the specified account in config.json. Message can be longer than 140 chars
 *  @returns  the http status code of the request to the API.
 */
long send_tweet(char *message);

#endif
