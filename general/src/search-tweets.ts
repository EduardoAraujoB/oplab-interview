import * as dotenv from 'dotenv';
import axios from 'axios';

dotenv.config();

async function SearchTweets(keyword: string) {
  try {
    const response = await axios.get(
      `https://api.twitter.com/1.1/search/tweets.json`,
      {
        headers: {
          authorization: `Bearer ${process.env.TWITTER_ACCESS_TOKEN}`,
        },
        params: {
          q: keyword,
          count: 10,
          result_type: 'recent',
        },
      }
    );

    return response.data;
  } catch (err) {
    return err.response;
  }
}

export default SearchTweets;
