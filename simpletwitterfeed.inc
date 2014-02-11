<?php

require_once('vendor/autoload.php');

/**
 * Generate a Twitter API bearer token.
 *
 * @param string $consumer_key
 * @param string $consumer_secret
 *
 * @return string
 *   Bearer token
 */
function _simpletwitterfeed_generate_bearer_token($consumer_key, $consumer_secret) {
  $client = new Freebird\Services\freebird\Client();

  $client->init_bearer_token($consumer_key, $consumer_secret);

  return $client->get_bearer_token();
}

/**
 * Request user tweets from Twitter API.
 *
 * @param string $user
 *   Twitter username
 * @param int $num
 *   Number of tweets to request
 * @param string $bearer_token
 *   Previously-generated bearer token
 *
 * @return object
 *   Twitter API response
 */
function _simpletwitterfeed_get_tweets($user, $num, $bearer_token) {
  $client = new Freebird\Services\freebird\Client();

  $client->set_bearer_token($bearer_token);

  $res = $client->api_request('statuses/user_timeline.json', array('screen_name' => $user, 'count' => $num));

  return json_decode($res);
}

